#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
float devolucionFraccionaria(float n);

float numero;

int main(){
	pedirDatos();
	
	cout<<"La parte fraccionario del numero es: "<<devolucionFraccionaria(numero)<<endl;
	
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
}
float devolucionFraccionaria(float n){

	int entero = n;
	float resultado = n - entero;
	
	return resultado;
}
