#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[100];
	int longitud=0;
	
	cout<<"Digite una frase o palabra: ";
	cin.getline(palabra,100,'\n');
	
	longitud = strlen(palabra);
	if(longitud>10){
		cout<<"La frase o palabra contiene: "<<longitud<<"caratcteres"<<endl<<"La frase o palabra es: "<<palabra<<endl;
	}
	else{
		cout<<"La frase o palabra contiene: "<<longitud<<" caratcteres"<<endl;
	}

	getch();
	return 0;
}


