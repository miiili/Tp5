#include <stdio.h>
int funcion (float r, float circ, float area, float vol, char op){
	float PI=3.14159;

	if ((op=='a')||(op=='A')){
		circ=PI*2*r;
		printf("La circunferencia es:%f\n", circ);
	}	
	else if ((op=='b')||(op=='B')){
		area=PI*r*r;
		printf("El area es:%f\n", area);
	}
	else if ((op=='c')||(op=='C')){
		vol=4.0/3.0*PI*(r*r*r);
		printf("El volumen es:%f\n", vol);
	}
	else{printf("Opcion no valida");
	}
	return 0;
}
int main(void) {
	float r;
	float circ;
	float area;
	float vol;
	char op;
	
	
	printf("Elija una opcion:\n");
	printf("a)Calculo de circunferencia\n");
	printf("b)Calculo del area\n");
	printf("c)Calculo del volumen\n");
	scanf("%c",&op);
	printf("Ingrese el radio:\n");
	scanf("%f",&r);
	funcion (r, circ, area, vol, op);
	return 0;
}

