#include<iostream>
#include<conio.h>
using namespace std;

void Cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int valor,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	 cout<<"digite un valor: ";
	 cin>>valor;
	 
	 Cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	 
	 cout<<"\nCantidad de billetes entregada como cambio: "<<endl;
	 cout<<"Cien: "<<cien<<endl;
	 cout<<"Cincuenta: "<<cincuenta<<endl;
	 cout<<"Veinte: "<<veinte<<endl;
	 cout<<"Diez: "<<diez<<endl;
	 cout<<"Cinco: "<<cinco<<endl;
	 cout<<"Uno: "<<uno<<endl;
	
	
	
	
	getch();
	return 0;
}

void Cambio(int valor,int& cien,int&cincuenta,int&veinte,int&diez,int&cinco,int&uno){
	cien = valor/100;
	valor %= 100;
	cincuenta = valor/50;
	valor %= 50;
	veinte = valor/20;
	valor %= 20;
	diez = valor/10;
	valor %= 10;
	cinco = valor/5;
	uno = valor%5;
	
	
}
