#include <stdio.h>
float funcion(int base, int exp){
	int mult=1;
	for(int i=0;i<exp;i++){
		mult=mult*base;
		
	}
	printf("El resultado es: %d",mult);
	return 0;
}
	int main(){
		float base;
		int exp;
		
		printf("Ingrese un numero base\n");
		scanf("%f", &base);
		printf("Ingrese el exponente\n");
		scanf("%d", &exp);
		funcion(base,exp);
	}
