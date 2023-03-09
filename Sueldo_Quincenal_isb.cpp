#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int CAT;
	float JO,JT,TB,PQ,TPQ,PRE,MES,VH,HES,HEST,HEC,HECT,VANT,ANT,ANTT,DES,FE,FERIADO,SUELDO_BRUTO,TDES,GNR,MTD,SUELDO_TOTAL;
	
	cout<<"Digite su categoria: ";
	cin>>CAT;
	
	if(CAT==1){
		JO = 1399.08;
		cout<<"Su jornal es: "<<JO;
	}
	else if(CAT==2){
		JO = 1463.43;
		cout<<"Su jornal es: "<<JO;
	}
	if(CAT==3){
		JO = 1489.86;
		cout<<"Su jornal es: "<<JO;
	}
	else if(CAT==4){
		JO = 1543.89;
		cout<<"Su jornal es: "<<JO;
	}
	if(CAT==5){
		JO = 1578.71;
		cout<<"Su jornal es: "<<JO;
	}
	else if(CAT==6){
		JO = 1633.56;
		cout<<"Su jornal es: "<<JO;
	}
	if(CAT==7){
		JO = 1704.62;
		cout<<"Su jornal es: "<<JO;
	}
	else if(CAT==8){
		JO = 1751.66;
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
	
		if(CAT==1){
	VANT = 419.72;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==2){
		VANT = 394.14;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==3){
	VANT = 392.04;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==4){
		VANT = 463.21;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==5){
	VANT = 473.63;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==6){
		VANT = 490.47;
		cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
		
	}
		if(CAT==7){
	VANT = 511.40;
	cout<<"Su pago por escalafon es: "<<VANT<<endl;
	cout<<"Digite sus años de escalafon: ";
	cin>>ANT;
	ANTT = ANT*VANT;
	cout<<"El total a cobrar por su antigüedad es: "<<ANTT<<endl;
	}
	else if(CAT==8){
		VANT = 525.50;
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
		PRE = (TB+TPQ+ANTT)*0.15;
		cout<<"\nEl Total ganado por presentismo es: "<<PRE<<endl;
		DES = (TB+ANTT+PRE+HEST+HECT)*0.18;
		cout<<"\nEl total de descuento es: "<<DES<<endl;
		SUELDO_BRUTO = TB+ANTT+PRE+HEST+HECT;
		cout<<"\nEl total de su sueldo bruto es: "<<SUELDO_BRUTO<<endl;
		TDES = SUELDO_BRUTO-DES;
		cout<<"\nEl sueldo total con descuento es: "<<TDES<<endl;
		MES = JT+PQ;
		cout<<"\nSus dias trabajados en el mes son: "<<MES<<endl;
		if((MES>24)&&(CAT==1)){
			GNR = 309.52*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES>24)&&(CAT==2)){
			GNR = 323.77*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		if((MES>24)&&(CAT==3)){
			GNR = 329.62*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES>24)&&(CAT==4)){
			GNR = 341.57*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}		
		if((MES>24)&&(CAT==5)){
			GNR = 349.27*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES>24)&&(CAT==6)){
			GNR = 361.41*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		if((MES>24)&&(CAT==7)){
			GNR = 377.13*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES>24)&&(CAT==8)){
			GNR = 387.54*25;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
			if((MES<25)&&(CAT==1)){
			GNR = 309.52*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES<25)&&(CAT==2)){
			GNR = 323.77*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		if((MES<25)&&(CAT==3)){
			GNR = 329.62*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES<25)&&(CAT==4)){
			GNR = 341.57*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}		
		if((MES<25)&&(CAT==5)){
			GNR = 349.27*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES<25)&&(CAT==6)){
			GNR = 361.41*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		if((MES<25)&&(CAT==7)){
			GNR = 377.13*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		else if((MES<25)&&(CAT==8)){
			GNR = 387.54*MES;
			cout<<"\nSu gratificacion no remunerativa es: "<<GNR<<endl;
		}
		cout<<"\n";
		
		SUELDO_TOTAL = TDES+GNR;
		cout<<"\nEl sueldo total de la segunda quincena es: "<<SUELDO_TOTAL<<endl;				
	}
	else{
		DES = (TB+ANTT+PRE+HEST+HECT)*0.18;
		cout<<"\nEl total de descuento es: "<<DES<<endl;
		SUELDO_BRUTO = TB+ANTT+PRE+HEST+HECT;
		cout<<"\nEl total de su sueldo bruto es: "<<SUELDO_BRUTO<<endl;
		TDES = SUELDO_BRUTO-DES;
		cout<<"\nEl sueldo total con descuento es: "<<TDES<<endl;
	}

	
	getch();
	return 0;
}

