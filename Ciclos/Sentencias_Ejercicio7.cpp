#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,suma = 0;
	cout<<"Digite esl numero de elementos: ";cin>>n;
	
	for(int i=1;i<=n;i++){
		suma += i;
	}
	
	cout<<"\nLa suma es: "<<suma;
	
	
	getch();
	return 0;
}
