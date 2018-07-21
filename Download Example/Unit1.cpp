//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    Form1->DoubleBuffered = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Form2->Connect();    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Form2->ShowModal();    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormShow(TObject *Sender)
{
    Left = (Screen->Width - Width)/2;
    Top = (Screen->Height - Height)/2;
}
//---------------------------------------------------------------------------
        /*
        5 : Work zero offset data
        7 : Operation history data
        18 : Rotary table dynamic fixture offset
        */

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    //Tool offset data
    Form2->LoadFile(1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
    //Parameter
    Form2->LoadFile(2);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
    //Pitch error compensation data
    Form2->LoadFile(3);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
    //Custom macro variables
    Form2->LoadFile(4);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
    //Work zero offset data
    Form2->LoadFile(5);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
    //Operation history data
    Form2->LoadFile(7);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    Label1->Visible = !Label1->Visible;     
}
//---------------------------------------------------------------------------
