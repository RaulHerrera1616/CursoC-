#include<iostream>
#include<conio.h>

using namespace std;
 int main(){
 	int matriz1[3][3] = {{2,0,1},{3,0,0},{5,1,1}};
 	int matriz2[3][3] = {{1,0,1},{1,2,1},{1,1,0}};
 	
 	cout<<"Matriz1\n";
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			cout<<matriz1[i][j]<<" ";
		 }
		 cout<<"\n";
	 }
	 cout<<"Matriz2\n";
	 for(int i=0;i<4;i++){
	 	for(int j=0;j<3;j++){
	 		cout<<matriz2[i][j]<<" ";
		 }
		 cout<<"\n";
	 }
	 cout<<"Suma de matrices\n";
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<3;j++){
	 	cout<<matriz1[i][j] + matriz2[i][j]<<" ";
		 }
		 cout<<"\n";
	 }
 	
 	
 	
 	
 	
 	
 	getch();
 	return 0;
 }
