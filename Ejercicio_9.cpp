#include <stdio.h>
#include <conio.h>

main() {
	int i,n,valor,acu=0;
	
	printf("Ingrese la cantidad de elementos del arreglo:\n");
	scanf("%d",&n);
	
	int N[n];
	printf("A continuacion ingrese los elementos del arreglo:\n");
	for (i=0;i<n;++i) {
		printf("Ingrese el elemento %d\n",i+1);
		scanf("%d",&valor);
		N[i]= valor;
		
	}
	for (i=0;i<n;++i) {
		 if (N[i]>N[0]) {
		 	printf("El elemento %d = %d es mayor que el elemento %d = %d\n",i+1,N[i],1,N[0]);
		 	++acu;
		 }
	}
	printf("La cantidad de elementos mayores al elemento 1 es %d\n",acu);
	getche();
}
