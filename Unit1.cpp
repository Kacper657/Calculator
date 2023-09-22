//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int first, second, result;
char operand;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"1";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Label1->Caption = " ";
Form1->BorderStyle = bsSingle;
Form1->BorderIcons = Form1->BorderIcons >> biMaximize;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"2";        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"3";        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"4";        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"5";        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"6";        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"7";        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"8";        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"9";        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender)
{
Label1->Caption = Label1->Caption+"0";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button11Click(TObject *Sender)
{
Label1->Caption = " ";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button13Click(TObject *Sender)
{
first = StrToInt(Label1->Caption);
Label1->Caption = " ";
operand = '/';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button12Click(TObject *Sender)
{
first = StrToInt(Label1->Caption);
Label1->Caption = " ";
operand = '-';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button14Click(TObject *Sender)
{
first = StrToInt(Label1->Caption);
Label1->Caption = " ";
operand = 'x';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button15Click(TObject *Sender)
{
first = StrToInt(Label1->Caption);
Label1->Caption = " ";
operand = '+';
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button16Click(TObject *Sender)
{
second = StrToInt(Label1->Caption);
switch(operand)
{
case '+':
result = first + second;
Label1->Caption = StrToInt(result);
break;
case '-':
result = first - second;
Label1->Caption = StrToInt(result);
break;
case '/':
if(second==0){ShowMessage("We don't divide by zero"); Label1->Caption = " ";
second = 1;}
result = first / second;
Label1->Caption = StrToInt(result);
break;
case 'x':
result = first * second;
Label1->Caption = StrToInt(result);
break;


}
}
//---------------------------------------------------------------------------
