#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[100];
	char cad2[100];
	
	cout<<"Digite la primera palabra o frase: ";
	cin.getline(cad1,100,'\n');
	cout<<"Digite la segunada palabra o frase: ";
	cin.getline(cad2,100,'\n');
	strupr(cad1);
	strupr(cad2);
	
	if(strcmp(cad1,cad2)==0){
		cout<<"La palabra o frase: "<<cad1<<" y la palabra o frase: "<<cad2<<" son iguales"<<endl;
	}
	else{
		cout<<"La palabra o frase: "<<cad1<<" y la palabra o frase "<<cad2<<" no son iguales"<<endl;
	}
	
	getch();
	return 0;
}
