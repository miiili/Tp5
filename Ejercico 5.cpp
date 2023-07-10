#include <stdio.h>
int funcion(int precio, int desc){
	int mult;
	int d;
	mult=(precio*desc)/100;
	d=precio-mult;
	printf("El precio a pagar es:$%d\n",d);
	return 0;
}
	int main(){
		int precio;
		int desc;
		printf("Ingrese el precio:\n");
		scanf("%d",&precio);
		printf("Ingrese el descuento:\n");
		scanf("%d",&desc);
		funcion(precio,desc);
	}
