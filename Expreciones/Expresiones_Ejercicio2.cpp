#include<iostream>
using namespace std;

int main(){
	float a,b,c,d,resultado = 0;
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b: ";cin>>b;
	cout<<"Digite el valor de c: ";cin>>c;
	cout<<"Digite el valor de d: ";cin>>d;
	
	resultado = (a+b)/(c+d);
	cout.precision(3);
	cout<<"El resulrtado es: "<<resultado<<endl;
	
	return 0;
}