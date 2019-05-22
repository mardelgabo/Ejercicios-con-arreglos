#include <stdio.h>
#include <conio.h> 

main() {
	int i,n,A[n],valor;
	
	printf("Ingrese la cantidad de elementos del arreglo \n");
	scanf("%d",&n);
	
	for (i=0;i<n;++i) {
		printf("Ingrese el elemento %d \n",i+1);
		scanf("%d",&valor);
		A[i]= valor;
	}
	printf("Los elementos menores al ultimo elemento son: \n");
	for (i=0;i<n;++i) {
		if (A[i]<A[n-1]) {
			printf("Posicion %d, valor = %d \n",i+1,A[i]);
		}
	}
	getche();
}
