// Programa que lee las utilidades de 5 empresas e imprime las que tienen utilidades mayor a 2,000,000.
#include <stdio.h>

int main(){
	int Contador, Utilidades, Acumulador;
	Contador=1;
	Acumulador=0;
	
	while(Contador<=5){
		printf("Tienda no. %d\n", Contador);
		printf("Ingrese las utilidades > ");
		scanf("%d", &Utilidades);
		printf("\n");
		
		if (Utilidades>2000000){
			Acumulador=Acumulador+1;
		}
		
		Contador++;
	}
	printf("%d tiendas tuvieron utilidades mayor a $2,000,000.", Acumulador);
	
	return 0;
}
