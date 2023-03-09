#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char saludo[] = "Hola que tal";
	char nombre[100];
	
	cout<<"Escriba su nombre: "; 	
	cin.getline(nombre,100,'\n');
	
	strcat(saludo,nombre);
	
	cout<<saludo<<endl;
	
	getch();
	return 0;
}
