//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Graphics.hpp>
#include <fstream.h>
#include <string.h>
//---------------------------------------------------------------------------
class TF1 : public TForm
{
__published:	// IDE-managed Components
	TImage *I1;
	TMainMenu *MM1;
	TMenuItem *Guardar1;
	TMenuItem *Cargar1;
	TMenuItem *Acercade1;
	TStaticText *ST1;
	TMemo *M1;
	TLabel *L1;
	TButton *B1;
	TMenuItem *DatosdeUbicacion1;
	TMenuItem *DatosdeTalla1;
	TLabel *L2;
	TEdit *E1;
	TButton *B2;
	TLabeledEdit *LE1;
	TMenuItem *GenerarListado1;
	TMenuItem *Bits1;
	void __fastcall Cargar1Click(TObject *Sender);
	void __fastcall Acercade1Click(TObject *Sender);
	void __fastcall B1Click(TObject *Sender);
	void __fastcall DatosdeUbicacion1Click(TObject *Sender);
	void __fastcall DatosdeTalla1Click(TObject *Sender);
	void __fastcall B2Click(TObject *Sender);
	void __fastcall LE1KeyPress(TObject *Sender, char &Key);
	void __fastcall I1Click(TObject *Sender);
	void __fastcall Bits1Click(TObject *Sender);
	void __fastcall GenerarListado1Click(TObject *Sender);
private:	// User declarations
public:
	int cPer;	// User declarations
	__fastcall TF1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF1 *F1;
//---------------------------------------------------------------------------
#endif
 