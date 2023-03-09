#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad1[100];
	char cad2[100];
	int numero1;
	float numero2, suma=0;
	
	cout<<"Digite la primera cadena de numeros enteros: ";
	cin.getline(cad1,100,'\n');
	
	cout<<"Digite la segunda cadena de numeros reales: ";
	cin.getline(cad2,100,'\n');
	
	numero1 = atoi(cad1);
	numero2 = atof(cad2);
	
	suma = numero1+numero2;
	cout<<"\nLa suma de las cadenas es igual a: "<<suma;
	
	
	getch();
	return 0;
}
