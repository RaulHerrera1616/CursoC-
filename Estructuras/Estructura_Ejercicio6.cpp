#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumnos[100];

int main(){
	int n_alumnos,posM=0;
	float promedio_alumno[100],mayor=0;
	
	cout<<"Digite el numero de alumnos: ";
	cin>>n_alumnos;
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		cout<<"Nombre: ";cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Sexo: ";cin.getline(alumnos[i].sexo,10,'\n');
		cout<<"Edad: ";cin>>alumnos[i].edad;
	
		cout<<"\n.:Notas del usuario:.\n";
		cout<<"Nota1: ";cin>>alumnos[i].prom.nota1;
		cout<<"Nota2: ";cin>>alumnos[i].prom.nota2;
		cout<<"Nota3: ";cin>>alumnos[i].prom.nota3;
	
		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
		
		if(promedio_alumno[i]>mayor){
			mayor = promedio_alumno[i];
			posM = i;
		}
		cout<<"\n";
	
	}
	cout<<"\nMostrando datos del alumno con mejor promedio\n";
	cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
	cout<<"sexo: "<<alumnos[posM].sexo<<endl;
	cout<<"Edad: "<<alumnos[posM].edad<<endl;
	cout<<"Promedio mayor: "<<promedio_alumno[posM];
	
	
	
	getch();
	return 0;
}
	
	
