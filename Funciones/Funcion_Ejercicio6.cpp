#include<iostream>
#include<conio.h>
using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD dato1,TIPOD dato2,TIPOD dato3);

int main(){
	char dato1 = 'e',dato2 = 'f',dato3 = 'a';
	cout<<"El valor maximo es: "<<maximo(dato1,dato2,dato3);
	
	
	
	getch();
	return 0;
}
template <class TIPOD>
TIPOD maximo(TIPOD dato1,TIPOD dato2,TIPOD dato3){
	TIPOD max;
	
	if((dato1>dato2)&&(dato1>dato3)){
		max = dato1;
	}
	else if((dato2>dato1)&&(dato2>dato3)){
		max = dato2;
	}
	else{
		max = dato3;
	}
	return max;
}
