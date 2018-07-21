//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
    : TForm(Owner)
{
    FFlibHndl=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Connect()
{
    short ret;
    //Ethernet
    if(RadioButton1->Checked) ret=cnc_allclibhndl3(Edit1->Text.c_str(), (WORD)StrToInt(Edit2->Text), 1, &FFlibHndl);
    //HSSB
    else ret=cnc_allclibhndl(&FFlibHndl);

    if(ret==EW_OK) ShowMessage("Connect OK");
    else ShowMessage("Connect Fail.");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
    Connect();    
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormShow(TObject *Sender)
{
    Left = (Screen->Width - Width)/2;
    Top = (Screen->Height - Height)/2;    
}
//---------------------------------------------------------------------------

void __fastcall TForm2::LoadFile(int index)
{
    if(FFlibHndl==0)return;

    /*
    type:
    0 : NC program
    1 : Tool offset data
    2 : Parameter
    3 : Pitch error compensation data
    4 : Custom macro variables
    5 : Work zero offset data
    7 : Operation history data
    18 : Rotary table dynamic fixture offset
    */

    Form1->Memo1->Lines->Clear();

    char buf[1024+1];
    short ret;
    long len;
    AnsiString tmp="";
    //通知Fanuc 開始下載
    ret=cnc_upstart4( FFlibHndl, index, "");
    if(ret)
    {
        Form1->Memo1->Lines->Add("Start Fail.");
        return;
    }

    Form1->Panel1->Visible= true;

    do
    {
        //最大讀取空間
        len=1024;
        //讀取，函式會依照實際讀取到的資料修改 len
        ret=cnc_upload4(FFlibHndl, &len, buf);

        buf[len+1]='\0';
        if(ret==EW_BUFFER)continue ;
        if(ret==EW_OK)
        {
            tmp+=AnsiString(buf,len);
            Form1->Memo1->Lines->Text=tmp;
            Application->ProcessMessages();
        }
        //結束碼
        if(buf[len-1]=='%')break ;
    }while((ret==EW_OK) || (ret==EW_BUFFER));

    Form1->Panel1->Visible= false;

    if(ret!=EW_OK)
    {
        Form1->Memo1->Lines->Add("Download Termination.");
        return;
    }

    //通知Fanuc 下載結束
    ret=cnc_upend4(FFlibHndl);
    if(ret!=EW_OK)
    {
        Form1->Memo1->Lines->Add("End Fail.");
    }

}
//---------------------------------------------------------------------------
