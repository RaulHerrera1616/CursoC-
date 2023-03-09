#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int CAT;
	float CAT1,CAT2,CAT3,CAT4,CAT5,CAT6,CAT7,CAT8,VH,HES,HEST,HEC,HECT,VANT,ANT,ANTT,DES,FE,FERIADO,SUELDO_BRUTO,TDES,GNR,MTD,PRE;
	
	cout<<"Digite su categoria: ";
	cin>>CAT;
	
	if(CAT==1){
		CAT1 = 34977;
		cout<<"Mi sueldo mensual es: "<<CAT1;
	}
	else if(CAT==2){
		CAT2 = 35831.08;
		cout<<"Mi sueldo mensual es: "<<CAT2;
	}
	if(CAT==3){
		CAT3 = 36639.06;
		cout<<"Mi sueldo mensual es: "<<CAT3;
	}
	else if(CAT==4){
		CAT4 = 46320.87;
		cout<<"Mi sueldo mensual es: "<<CAT4;
	}
	if(CAT==5){
		CAT5 = 47363.19;
		cout<<"Mi sueldo mensual es: "<<CAT5;
	}
	else if(CAT==6){
		CAT6 = 49007.14;
		cout<<"Mi sueldo mensual es: "<<CAT6;
	}
	if(CAT==7){
		CAT7 = 51140.46;
		cout<<"Mi sueldo mensual es: "<<CAT7;
	}
	else if(CAT==8){
		CAT8 = 52550.38;
		cout<<"Mi sueldo mensual es: "<<CAT8;
	}
	cout<<"\n";
	
	if(CAT==1){
		VH = (CAT1/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	}
	else if(CAT==2){
		VH = (CAT2/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	}
	if(CAT==3){
		VH = (CAT3/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	}
	else if(CAT==4){
		VH = (CAT4/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	}
	if(CAT==5){
		VH = (CAT5/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	}
	else if(CAT==6){
		VH = (CAT6/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	}
	if(CAT==7){
		VH = (CAT7/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	}
	else if(CAT==8){
		VH = (CAT8/30)/8;
		cout<<"El valor de la hora es: "<<VH<<endl;
		cout<<"\nDigite la cantidad de horas extras simples: ";
		cin>>HES;
		HEST = (VH*1.5)*HES;
		cout<<"El total pagado por horas extras simples es: "<<HEST<<endl;
		cout<<"\nDigite la cantidad de horas extras dobles: ";
		cin>>HEC;
		HECT = (VH*2)*HEC;
		cout<<"El total pagado por horas extras dobles es: "<<HECT<<endl;
	}
	cout<<"\n";
	
	if(CAT==1){
	VANT = 371.44;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==2){
		VANT = 356.14;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==3){
	VANT = 352.69;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==4){
		VANT = 409.88;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==5){
	VANT = 419.13;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==6){
		VANT = 433.69;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==7){
	VANT = 452.55;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==8){
		VANT = 465.04;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
	cout<<"\n";
	
	cout<<"El pago por dias feriados es: "<<VH*8<<endl;
	cout<<"Digite la cantidad de feriados trabajados: ";
	cin>>FE;
	FERIADO = (VH*8)*FE;
	cout<<"El total a pagar por dias feriados es: "<<FERIADO<<endl;
	
	if(CAT==1){
		SUELDO_BRUTO = CAT1+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
	} 
	else if(CAT==2){
		SUELDO_BRUTO = CAT2+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
	}
	if(CAT==3){
		SUELDO_BRUTO = CAT3+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
	} 
	else if(CAT==4){
		SUELDO_BRUTO = CAT4+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
	}
	if(CAT==5){
		SUELDO_BRUTO = CAT5+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
	} 
	else if(CAT==6){
		SUELDO_BRUTO = CAT6+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
	}
	if(CAT==7){
		SUELDO_BRUTO = CAT7+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
	} 
	else if(CAT==8){
		SUELDO_BRUTO = CAT8+HEST+HECT+ANTT+FERIADO;
		cout<<"\nSu sueldo bruto es: "<<SUELDO_BRUTO<<endl;
	}
	cout<<"\n";
	
	PRE = (SUELDO_BRUTO-HEST-HEC-FERIADO)*0.15;
		cout<<"\nEl Total ganado por presentismo es: "<<PRE<<endl;
	DES = ((SUELDO_BRUTO+PRE)*18)/100;
	cout<<"\nSu descuento es: "<<DES<<endl;
	TDES = SUELDO_BRUTO+PRE-DES;
	cout<<"\nSu sueldo total con descuento es: "<<TDES<<endl;
	
	if(CAT==1){
		GNR = 7738.00;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	else if(CAT==2){
		GNR = 7927.23;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
		if(CAT==3){
		GNR = 8105.99;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	else if(CAT==4){
		GNR = 10247.98;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
		if(CAT==5){
		GNR = 10478.58;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	else if(CAT==6){
		GNR = 10842.29;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
		if(CAT==7){
		GNR = 11314.26;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	else if(CAT==8){
		GNR = 11626.19;
		cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
	}
	cout<<"\n";
	
	MTD = TDES+GNR;
	cout<<"\nEl mensual depositado es: "<<MTD<<endl;
	
	getch();
	return 0;
}

