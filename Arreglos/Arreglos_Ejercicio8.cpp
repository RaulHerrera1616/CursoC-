#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5],numeros2[5];
	
	for(int i=0;i<5;i++){
		cout<<". Digite un numero: "; cin>>numeros[i];
	}
	
	cout<<"\nMostrando numeros multiplicados por 2:\n\n";
	
	for(int i=0;i<5;i++){
		numeros2[i] = numeros[i]*2;
	}
	
	for(int i=0;i<5;i++){
		cout<<numeros2[i]<<endl;
	}
	
	getch();
	return 0;
}
