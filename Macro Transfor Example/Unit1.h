//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TMemo *Memo1;
    TMemo *Memo2;
    TButton *Button1;
    TOpenDialog *OpenDialog1;
    TMainMenu *MainMenu1;
    TMenuItem *MI_File;
    TMenuItem *MI_Open;
    TSaveDialog *SaveDialog1;
    TMenuItem *MI_SaveAs;
    TGroupBox *GroupBox1;
    TRadioButton *RadioButton1;
    TRadioButton *RadioButton2;
    TRadioButton *RadioButton3;
    TRadioButton *RadioButton4;
    TRadioButton *RadioButton5;
    TRadioButton *RadioButton6;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall MI_OpenClick(TObject *Sender);
    void __fastcall MI_SaveAsClick(TObject *Sender);
    void __fastcall RadioButton1Click(TObject *Sender);
    void __fastcall RadioButton2Click(TObject *Sender);
    void __fastcall RadioButton3Click(TObject *Sender);
    void __fastcall RadioButton4Click(TObject *Sender);
    void __fastcall RadioButton5Click(TObject *Sender);
    void __fastcall RadioButton6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);

    int DecCount;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
