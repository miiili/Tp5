#include <stdio.h>
#include <math.h>
int funcion(int px1, int px2, int py1, int py2){
	int difx;
	difx= px2-px1;
	int dify;
	dify= py2-py1;
	int suma;
	suma=pow(difx,2)+pow(dify,2);
	int mod;
	mod=sqrt(suma);
	printf("La diferencia entre los puntos es: %d",mod);
}
int main(){
	int px1;
	int px2;
	int py1;
	int py2;
	
	printf("Ingrese el valor de x del primer punto:\n");
	scanf("%d",&px1);
	printf("Ingrese el valor de y del primer punto:\n");
	scanf("%d",&py1);
	printf("Ingrese el valor de x del segundo punto:\n");
	scanf("%d",&px2);
	printf("Ingrese el valor de y del segundo punto:\n");
	scanf("%d",&py2);
	funcion(px1,px2,py1,py2);
	return(0);
}

