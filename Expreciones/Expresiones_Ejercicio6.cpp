#include<iostream>
using namespace std;

int main(){
	float nota1,nota2,nota3,nota4;
	int notaFinalMedia;
	cout<<"Digite la nota1: ";cin>>nota1;
	cout<<"Digite la nota2: ";cin>>nota2;
	cout<<"Digite la nota3: ";cin>>nota3;
	cout<<"Digite la nota4: ";cin>>nota4;
	
	notaFinalMedia = (nota1+nota2+nota3+nota4)/4;
	cout<<"la final media es:"<<notaFinalMedia;
	
	return 0;
}
