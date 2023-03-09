#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"Digite el numero de elementos que va a tener elarreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i]; //Guardando todos los numeros del vector
	}
	
	//Ahora, vamos a mostrar los elementos con sus indices asociados
	
	for(int i=0;i<n;i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
