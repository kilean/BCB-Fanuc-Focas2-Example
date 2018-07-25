//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    DecCount = -1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Memo2->Lines->Clear();
    byte buf[8];
    for(int i=0; i<Memo1->Lines->Count; i++)
    {
        AnsiString Data = Memo1->Lines->Strings[i];
        //if(Data.Length()<28) continue;
        int pos1 = Data.Pos("P");
        int pos2 = Data.Pos("(");
        int pos3 = Data.Pos(")");
        if((pos1 == 0) || (pos2 == 0) || (pos3==0)) continue;
        AnsiString Para = Data.SubString(pos1+1, pos2 - pos1 - 1);
        AnsiString Val = Data.SubString(pos2+1, Data.Length()-pos2-2);
        double dVal = 0;
        for(int j=0; j<8; j++)
        {
            AnsiString SB=Val.SubString(1+j*2,2);
            buf[7-j] = StrToInt("0x"+SB);
        }
        CopyMemory(&dVal, buf, 8);

        if(DecCount==-1)
        {
            Memo2->Lines->Add(Para+"\t" + FloatToStr(dVal));
        }
        else
        {
            AnsiString Fmt = "0.";
            for(int i=0; i< DecCount; i++) Fmt+="0";
            Memo2->Lines->Add(Para+"\t" + FormatFloat(Fmt,dVal));
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::MI_OpenClick(TObject *Sender)
{
    if(OpenDialog1->Execute())
    {
        Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
        Button1->Click();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::MI_SaveAsClick(TObject *Sender)
{
    if(SaveDialog1->Execute())
    {

        int count = Memo2->Lines->Count;
        TStringList *list = new TStringList;
        for(int i=0; i<count; i++)
        {

            AnsiString line = Memo2->Lines->Strings[i];
            int pos = line.Pos("\t");
            AnsiString Str1 = line.SubString(1,pos-1);
            AnsiString Str2 = line.SubString(pos+1, line.Length()-pos);
            AnsiString data=Str1+","+Str2;
            list->Add(data);
        }
        list->SaveToFile(SaveDialog1->FileName);

        delete list;
        //Memo2->Lines->SaveToFile(SaveDialog1->FileName);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
    DecCount=-1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
    DecCount=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
    DecCount=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
    DecCount=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton5Click(TObject *Sender)
{
    DecCount=3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton6Click(TObject *Sender)
{
    DecCount=4;
}
//---------------------------------------------------------------------------

