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
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
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
