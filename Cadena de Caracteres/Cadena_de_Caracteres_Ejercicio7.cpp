#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[100];
	
	cout<<"Digite su nombre en mayuscula: ";
	cin.getline(nombre,100,'\n');
	
	if(nombre[0]=='A'){
		strlwr(nombre);
		cout<<nombre<<endl;
	}
	else{
		cout<<nombre<<endl;
	}
	
	getch();
	return 0;
}
