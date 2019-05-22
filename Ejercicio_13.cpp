#include <stdio.h>
#include <conio.h>

main () {
	int i,n,valor,b;
	
	printf("Ingrese la cantidad de elementos del conjunto: \n");
	scanf("%d",&n);
	
	int N[n],B[n];
	
	printf("A continuacion ingrese los elementos del conjunto: \n");
	for (i=0;i<n;++i) {
		int factorial =1;
		printf("Ingrese el elemento %d \n",i+1);
		scanf("%d",&valor);
		N[i]= valor;
		for (b=valor;b>1;--b) {
			factorial *= b;
		} 
		B[i]= factorial;
	}
	for (i=0;i<n;++i) {
		printf ("El factorial de %d es %d \n",N[i],B[i]);
	}
}
