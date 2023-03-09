#include<iostream>
using namespace std;

int main(){
	float practica,teorica,participacion,nota_final = 0;
	
	cout<<"digite la nota de practica: ";cin>>practica;
	cout<<"digite la nota teorica: ";cin>>teorica;
	cout<<"digite la nota de paricipacion: ";cin>>participacion;
	
	practica*=0.30;
	teorica*= 0.60;
	participacion*= 0.10;
	
	nota_final = practica + teorica + participacion;
	cout<<"\nLa nota final es: "<<nota_final;
	return 0;
}
