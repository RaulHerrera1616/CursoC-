#include<iostream>
using namespace std;

int main(){
	float precio, precioFinal, IVA ;
	
	cout<<"Digite el precio del producto: ";
	cin>>precio;
	
	
	IVA = precio * 0.21;
	precioFinal = precio - IVA;
	cout<<"\nEl IVA es: "<<IVA<<'$'<<endl;
	cout<<"\nEl precio Final al aplicarle el IVA es: "<<precioFinal<<'$';
	
	return 0;
}
