#include <stdio.h>
#include <math.h>
float funcion(float a, float b, float c){
	float d, r1, r2;
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("Error! Raices complejas");
		return 0;
	}
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("Las raices son %.2f y %.2f",r1,r2);
	return 0;
}
	int main(){
		float a,b,c;
		printf("Ingrese el coeficientes a:\n");
		scanf("%f",&a);
		printf("Ingrese el coeficientes b:\n");
		scanf("%f",&b);
		printf("Ingrese el coeficientes c:\n");
		scanf("%f",&c);
		funcion(a,b,c);
		return 0;
	}
