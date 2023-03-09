#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int CAT;
	float JO,JT,TB,PQ,TPQ,PRE,AUS,MES,VH,HES,HEST,HEC,HECT,FAL,VANT,ANT,ANTT,DES,FE,FERIADO,SUELDO_BRUTO,TDES,GNR,MTD,SUELDO_TOTAL;
	
	cout<<"Digite su categoria: ";
	cin>>CAT;
	
	if(CAT==1){
		JO = 1105.46;
		cout<<"Su jornal es: "<<JO;
	}
	else if(CAT==2){
		JO = 1156.31;
		cout<<"Su jornal es: "<<JO;
	}
	if(CAT==3){
		JO = 1177.200;
		cout<<"Su jornal es: "<<JO;
	}
	else if(CAT==4){
		JO = 1219.89;
		cout<<"Su jornal es: "<<JO;
	}
	if(CAT==5){
		JO = 1247.4;
		cout<<"Su jornal es: "<<JO;
	}
	else if(CAT==6){
		JO = 1290.84;
		cout<<"Su jornal es: "<<JO;
	}
	if(CAT==7){
		JO = 1346.89;
		cout<<"Su jornal es: "<<JO;
	}
	else if(CAT==8){
		JO = 1384.32;
		cout<<"Su jornal es: "<<JO;
	}
	VH = JO/8;
	cout<<"\nEl valor de la hora es: "<<VH<<endl;
	cout<<"Ingrese sus dias trabajados: ";
	cin>>JT;
	TB = JT*JO;
	cout<<"\nEl total bruto de la quincena es: "<<TB<<endl;
	cout<<"Ingrese el total de horas extras simples: ";
	cin>>HES;
	HEST = (VH*1.5)*HES;
	cout<<"\nEl total a cobrar de horas extras simples es: "<<HEST<<endl;
	cout<<"Ingrese el total de horas extras al cien: ";
	cin>>HEC;
	HECT = (VH*2)*HEC;
	cout<<"\nEl total a cobrar de horas extras al cien es: "<<HECT<<endl;
	cout<<"Ingrese los dias feriados: ";cin>>FE;
	FERIADO = FE*JO;
	cout<<"El total de feriados es: "<<FERIADO<<endl;
	cout<<"Ingrese la cantidad de ausencia injustificada";
	cin>>FAL;
	AUS = FAL;
	cout<<"El Total de ausentes es: "<<AUS<<endl; 
	
		if(CAT==1){
	VANT = 331.64;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==2){
		VANT = 317.99;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==3){
	VANT = 314.90;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==4){
		VANT = 365.96;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==5){
	VANT = 374.21;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==6){
		VANT = 387.22;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==7){
	VANT = 404.06;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==8){
		VANT = 418.21;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
	cout<<"\n";
	
	if(ANT>0){
		cout<<"\nIngrese los dias trabajados en la primera quincena: ";
		cin>>PQ;
		TPQ = PQ*JO;
		cout<<"El Total ganado en la primera quincena es: "<<TPQ<<endl;
		if(AUS==0){
			PRE = ((JO*25)+ANTT)*0.15;
		cout<<"\nEl Total ganado por presentismo es: "<<PRE<<endl;
		}
		else{
			PRE = ((JO*25)+ANTT)*0.075;
		cout<<"\nEl Total ganado por presentismo es: "<<PRE<<endl;
		}
		DES = (TB+ANTT+PRE+HEST+HECT+FERIADO)*0.18;
		cout<<"\nEl total de descuento es: "<<DES<<endl;
		SUELDO_BRUTO = TB+ANTT+PRE+HEST+HECT+FERIADO;
		cout<<"\nEl total de su sueldo bruto es: "<<SUELDO_BRUTO<<endl;
		TDES = SUELDO_BRUTO-DES;
		cout<<"\nEl sueldo total con descuento es: "<<TDES<<endl;
		MES = JT+PQ+FERIADO;
		cout<<"\nSus dias trabajados en el mes son: "<<MES<<endl;
		if((MES>24)&&(CAT==1)){
			GNR = 132.65*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES>24)&&(CAT==2)){
			GNR = 138.77*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		if((MES>24)&&(CAT==3)){
			GNR = 141.15*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES>24)&&(CAT==4)){
			GNR = 146.38*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}		
		if((MES>24)&&(CAT==5)){
			GNR = 149.68*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES>24)&&(CAT==6)){
			GNR = 154.79*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		if((MES>24)&&(CAT==7)){
			GNR = 161.63*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES>24)&&(CAT==8)){
			GNR = 165.09*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
			if((MES<25)&&(CAT==1)){
			GNR = 132.65*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES<25)&&(CAT==2)){
			GNR = 138.77*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		if((MES<25)&&(CAT==3)){
			GNR = 141.15*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES<25)&&(CAT==4)){
			GNR = 146.38*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}		
		if((MES<25)&&(CAT==5)){
			GNR = 149.68*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES<25)&&(CAT==6)){
			GNR = 154.79*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		if((MES<25)&&(CAT==7)){
			GNR = 161.63*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES<25)&&(CAT==8)){
			GNR = 165.09*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		cout<<"\n";
		
		SUELDO_TOTAL = TDES+GNR;
		cout<<"\nEl sueldo total de la segunda quincena es: "<<SUELDO_TOTAL<<endl;				
	}
	else{
		DES = (TB+ANTT+PRE+HEST+HECT+FERIADO)*0.18;
		cout<<"\nEl total de descuento es: "<<DES<<endl;
		SUELDO_BRUTO = TB+ANTT+PRE+HEST+HECT+FERIADO;
		cout<<"\nEl total de su sueldo bruto es: "<<SUELDO_BRUTO<<endl;
		TDES = SUELDO_BRUTO-DES;
		cout<<"\nEl sueldo total con descuento es: "<<TDES<<endl;
	}

	
	getch();
	return 0;
}
