#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x,y,elevacion=1;
	
	cout<<"Digite el valor de x: ";cin>>x;
	cout<<"Digite el valor de y: ";cin>>y;
	
	for(int i=1;i<=y;i++){
		elevacion *= x;
	}
	
	cout<<"\nl valor de la elevacion es: "<<elevacion;
	
	
	getch();
	return 0;
}
