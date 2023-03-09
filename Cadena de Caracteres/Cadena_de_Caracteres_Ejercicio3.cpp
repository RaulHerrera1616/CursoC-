#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[100];
	char palabra2[100];
	
	cout<<"Digite la primer palabra: ";
	cin.getline(palabra1,100,'\n');
	cout<<"Digite la segunda palabra: ";
	cin.getline(palabra2,100,'\n');
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Las palabras son iguales";
	}
	else if(strcmp(palabra1,palabra2)>0){
		cout<<"La palabra "<<palabra1<<" Esta despues alfabeticamente que "<<palabra2<<endl;
	}
	else{
		cout<<"La palabra "<<palabra2<<" Esta despues alfabeticamente que "<<palabra1<<endl;
	}
	
	getch();
	return 0;
}
