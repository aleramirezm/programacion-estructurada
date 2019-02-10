#include <stdio.h>

int main(){
	int Utilidades, Contador, Monto, Acum;
	Contador=1;
	Acum=0;
	
	while(Contador<=5){
		printf("Tienda no. %d", Contador);
		printf("\nIngrese el monto de venta > ");
		scanf("%d", &Monto);
		printf("\n");
		
		Utilidades=Monto*12;
		
		if (Utilidades>2000000){
			Acum=Acum+1;
		}
		Contador++;
	}
	printf("\n%d tiendas tuvieron un  monto mayor a 2,000,000", Acum);
	
	return 0;
}
