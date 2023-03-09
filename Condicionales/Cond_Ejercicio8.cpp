#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	cout<<"Digite los 3 primeros numeros: ";
	cin>>n1>>n2>>n3;
	
	cout<<"Digite el 4to numero: ";
	cin>>n4;
	
	if((n1==n4)||(n2==n4)||(n3==n4)){
		cout<<"El numero coincide con uno de los numeros anteriores";
	}
	else{
		cout<<"El numero no coincide con ninguno de los anteriores";
	}
		
	
	return 0;
}
