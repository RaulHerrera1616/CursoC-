#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int examen1,examen2,examen3;
	int aprobaron_todos_examenes=0,aprobaron_almenos_uno=0,aprobaron_ultimo=0;
	
	for(int i=1;i<=5;i++){
		cout<<"Digite la nota del primer examen: "; cin>>examen1;
		cout<<"Digite la nota del segundo examen: "; cin>>examen2;
		cout<<"Digite la nota del tercer examen: "; cin>>examen3;
		
		cout<<"\n ";
		
		if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
			aprobaron_todos_examenes++;
		}
		if((examen1>10.5)||(examen2>10.5)||(examen3>10.5)){
			aprobaron_almenos_uno++;
		}
		if((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5)){
			aprobaron_ultimo++;
		}
	}
		cout<<"\na) Aprobaron todos los examenes"<<aprobaron_todos_examenes<<endl;
		cout<<"\nb) Aprobaron al menos un examen"<<aprobaron_almenos_uno<<endl;
		cout<<"\nc) Aprobaron el ultimo examen"<<aprobaron_ultimo<<endl;
	
	cout<<"\n";
	system("pause");
	return 0;
}
