#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char a[100],b[100];
	
	cout<<"Digite una palabra o frase: ";
	cin.getline(a,100,'\n');
	
	strcpy(b,a);
	cout<<"\n"<<b;
	
	
	getch();
	return 0;
}
