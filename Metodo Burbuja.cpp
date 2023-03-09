//Metodo Burbuja

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5] = {2,3,1,5,4};
	int i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}
	
	cout<<"Numeros de forma Ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nNumeros de forma Descendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
