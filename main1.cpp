#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
  void gotoxy(int x, int y){
  	COORD coord;
  	coord.X= x;
  	coord.Y= y;
  	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
  }
int main(){

int a, b, sum, re, multi, di;
cout<<"Ingrese primer numero: "<<endl;
cin>>a;
cout<<"Ingrese segundo numero: "<<endl;
cin>>b;
system("cls");
sum= a+b;
re= a-b;
multi=a*b;
di= a/b;

gotoxy(46,10);
cout<<"La respuesta de la suma es: "<<sum<<endl;
gotoxy(45,11);
cout<<"La respuesta de la resta es: "<<re<<endl;
gotoxy(41,12);
cout<<"La respuesta de la multiplicacion es: "<<multi<<endl;
gotoxy(43,13);
cout<<"La respuesta de la division es: "<<di<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;




return 0;
}