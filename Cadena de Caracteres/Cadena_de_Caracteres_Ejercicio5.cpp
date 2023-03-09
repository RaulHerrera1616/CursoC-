#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[100];
	char cad2[100];
	
	cout<"Digite una palabra o frase: ";
	cin.getline(cad1,100,'\n');
	
	strcpy(cad2,cad1);
	strrev(cad2);
	
	if(strcmp(cad1,cad2)==0){
		cout<<"Es polidroma"<<endl;
	}
	else{
		cout<<"No es polidroma"<<endl;
	}
	
	getch();
	return 0;
}
