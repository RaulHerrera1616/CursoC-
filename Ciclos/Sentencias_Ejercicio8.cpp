#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,suma = 0;
	
	cout<<"Digite la cantidad de elmentos que desea sumar: ";cin>>n;
	
	for(int i=1;i<=2*n-1;i+=2){
		suma += i;
	}
	
	cout<<"La suma es: "<<suma<<endl;
	
	
	getch();
	return 0;
}
