//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "Fwlib32.h"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label2;
    TEdit *Edit1;
    TEdit *Edit2;
    TButton *Button1;
    TGroupBox *GroupBox1;
    TRadioButton *RadioButton1;
    TRadioButton *RadioButton2;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
    WORD FFlibHndl;

public:		// User declarations
    __fastcall TForm2(TComponent* Owner);

    void __fastcall Connect();
    void __fastcall LoadFile(int index);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
