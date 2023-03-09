#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int CAT;
	float BAS,CAT8,VH,HES,HEST,HEC,HECT,VANT,ANT,ANTT,DES,FE,FERIADO,SUELDO_BRUTO,TDES,GNR,MTD,PRE;
	
	cout<<"Digite su categoria: ";
	cin>>CAT;
	
	if(CAT==1){
		BAS = 27636.5;
		cout<<"Mi sueldo mensual Basico es: "<<CAT1;
		VANT = 331.64;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	if (FALTAS >0){
		VANT = 331.64-(331.64/(30-FALTAS));
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	}
	}
	else if(CAT==2){
		BAS = 28907.75;
		cout<<"Mi sueldo mensual Basico es: "<<CAT2;
		VANT = 317.99;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
		if (FALTAS >0){
		VANT = 317.99-(317.99/(30-FALTAS));
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	}
	if(CAT==3){
		BAS = 29430;
		cout<<"Mi sueldo mensual Basico es: "<<CAT3;
		VANT = 314.90;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	if (FALTAS >0){
		VANT = 314.90-(314.90/(30-FALTAS));
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	}
	}
	else if(CAT==4){
		BAS = 30497.25;
		cout<<"Mi sueldo mensual Basico es: "<<CAT4;
		VANT = 365.96;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
		if (FALTAS >0){
		VANT = 365.96-(365.96/(30-FALTAS));
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	}
	}
	if(CAT==5){
		BAS = 31.185;
		cout<<"Mi sueldo mensual Basico es: "<<CAT5;
		VANT = 374.21;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	if (FALTAS >0){
		VANT = 374.21-(374.21/(30-FALTAS));
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	}
 else if(CAT==6){
		BAS = 32271;
		cout<<"Mi sueldo mensual Basico es: "<<CAT6;
		VANT = 387.22;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
		if (FALTAS >0){
		VANT = 387.22-(387.22/(30-FALTAS));
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	}
 if(CAT==7){
		BAS = 33672.25;
		cout<<"Mi sueldo mensual Basico es: "<<CAT7;
		VANT = 404.06;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	if (FALTAS >0){
		VANT = 404.06-(404.06/(30-FALTAS));
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	}
 else if(CAT==8){
		BAS = 34608;
		cout<<"Mi sueldo mensual Basico es: "<<CAT8;
		VANT = 418.21;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
		if (FALTAS >0){
		VANT = 418.21-(418.21/(30-FALTAS));
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	}
	cout<<"\n";
	
	
		VH = (BAS/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	
	
	
		
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	cout<<"El pago por dias feriados es: "<<VH*8<<endl;
	cout<<"Digite la cantidad de feriados trabajados: ";
	cin>>FE;
	FERIADO = (VH*8)*FE;
	cout<<"El total a pagar por dias feriados es: "<<FERIADO<<endl;
		SUELDO_BRUTO = BAS+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
		if(FALTAS == 0){
			PRE = BAS+ANTT)*0.15;
		cout<<"\nEl Total ganado por presentismo es: "<<PRE<<endl;
		}
		else{
			PRE = ((BAS+ANTT)*0.15)/2;
		}
	DES = ((SUELDO_BRUTO+PRE)*18)/100;
	cout<<"\nSu descuento es: "<<DES<<endl;
	TDES = SUELDO_BRUTO+PRE-DES;
	cout<<"\nSu sueldo total con descuento es: "<<TDES<<endl;
	
	if(CAT==1){
		GNR = 3316.25;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	else if(CAT==2){
		GNR = 3469.25;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
		if(CAT==3){
		GNR = 3528.75;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	else if(CAT==4){
		GNR = 3659.5;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
		if(CAT==5){
		GNR = 3742;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	else if(CAT==6){
		GNR = 3869.75;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
		if(CAT==7){
		GNR = 4040.75;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	else if(CAT==8){
		GNR = 4127.25;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	cout<<"\n";
	
	MTD = TDES+GNR;
	cout<<"\nEl mensual depositado es: "<<MTD<<endl;
	
	getch();
	return 0;
}
