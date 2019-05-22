#include <stdio.h>
#include <conio.h>

main() {
	int i,n,valor,resultado=0;
	
	printf("Ingrese la cantidad de datos a procesar \n");
	scanf("%d",&n);
	
	int datos1[n],datos2[n];
	
	printf("A continuacion ingrese los valores del primer vector: \n");
	
	for (i=0;i<n;++i) {
		
		printf("Ingrese un valor \n");
		scanf("%d",&valor);
		datos1[i] = valor;
	}
	
	printf("A continuacion ingrese los valores del segundo vector: \n");
	for (i=0;i<n;++i) {
		
		printf("Ingrese un valor \n");
		scanf("%d",&valor);
		datos2[i] = valor;
	}
	
	for (i=0;i<n;++i) {
		
		resultado += datos1[i]*datos2[i];
	}
	
	printf("El producto escalar entre ambos vectores es: %d \n",resultado);
	getche();
}
