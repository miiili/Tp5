#include <stdio.h>
#include <math.h>
int funcion (int dia, int mes, int anio){
	int k, j, cant_dias=0, cant_meses [13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (anio%4==0){
		cant_meses[2]=29;
	}
	for (k=1; k<=mes; k++){
		for (j=1; j<=cant_meses[k];j++){
			if(j==dia&&k==mes){
				cant_dias++;
				break;
			}
			else cant_dias++;
		}
	}
		
	return cant_dias;
}
	
int main(){
	int dia;
	int mes;
	int anio;
	int total_dias;
	
	printf ("Ingrese el dia:\n");
	scanf ("%d", &dia);
	printf ("Ingrese el mes:\n");
	scanf ("%d", &mes);
	printf ("Ingrese el anio:\n");
	scanf ("%d", &anio);
	total_dias= funcion(dia, mes, anio);
	printf ("Es el numero de dia:%d\n",total_dias);
	return 0;	
}
