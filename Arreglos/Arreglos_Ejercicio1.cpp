#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5] = {1,2,3,4,5};
	int suma=0;

	for(int i=0;i<5;i++){
		suma += numeros[i]; //Hacemos la multiplicacion iterativa
	}
	
	cout<<"La multiplicacion de los elementos es: "<<suma<<endl;
	
	getch();
	return 0;

}
