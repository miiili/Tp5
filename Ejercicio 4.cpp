#include <stdio.h>
int funcion(int a, int b, int c){
	int r;
	
	if(a>b){
		if(a>c){
			r=a;
		}
	}	
	else if(a<b){
		if(b>c){
			r=b;
		}
		else if(b<c){
			r=c;
		}
	}	
	printf("El valor mayor es:%d\n",r);
	return 0;
}
	int main(){
		int a;
		int b;
		int c;
		
		printf("Ingrese el primer valor:\n");
		scanf("%d",&a);
		printf("Ingrese el segundo valor:\n");
		scanf("%d",&b);
		printf("Ingrese el tercer valor:\n");
		scanf("%d",&c);
		funcion(a,b,c);
	}
