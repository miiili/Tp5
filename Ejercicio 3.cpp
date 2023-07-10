#include <stdio.h>
float funcion(float r1, float r2, float r3){
	float d, requiv;
	d=(1/r1)+(1/r2)+(1/r3);
	requiv=1/d;
	printf("El valor de Requiv es:%f\n",requiv);
	return 0;
	
}
	int main(){
		float r1;
		float r2; 
		float r3;
		
		printf("Ingrese el valor de r1:\n");
		scanf("%f",&r1);
		printf("Ingrese el valor de r2:\n");
		scanf("%f",&r2);
		printf("Ingrese el valor de r3:\n");
		scanf("%f",&r3);
		funcion(r1,r2,r3);
		
	}
