#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float temperatura,suma_temperatura=0, temperatura_media;
	float temperatura_alta=0,temperatura_baja=999;
	
	for(int i=0;i<24;i+=4){
		cout<<"Digite la temperatura a las "<<i<<":";
		cin>>temperatura;
		
		suma_temperatura += temperatura;
		
		if(temperatura>temperatura_alta){
			temperatura_alta = temperatura;
		}
		if(temperatura<temperatura_baja){
			temperatura_baja = temperatura;
		}
	}
	
	temperatura_media = suma_temperatura / 6;
	
		cout<<"\nLa temperatura media del dia es: "<<temperatura_media<<endl;
		cout<<"La temperatura mas alta es: "<<temperatura_alta<<endl;
		cout<<"La temperatura mas baja es: "<<temperatura_baja<<endl;
		
	getch();	
	return 0;
}
