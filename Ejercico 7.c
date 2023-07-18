#include <stdio.h>
int factorial (int n);
int factorial(int n){
	int i,
		producto=1;
	for (i=n;i>1;--i){
		producto *=i;
	}
	return(producto);
}
int main(void) {
	int a;
	int fact;
	
	printf("Ingrese un número entero:\n");
	scanf("%d",&a);
	
	if (a<0){
		printf("El factorial de un numero negativo es indefinido");
	}
	else if(a<=30){
		fact=factorial(a);
		printf("El factorial de %d es %d\n", a, fact);
	}
	else {
		printf("Numero fuera de rango\n",a);
	}
	return (0);
}
