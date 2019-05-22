#include <stdio.h>
#include <conio.h>

main() {
	
	int n,i,escalar,valor;
	
	
	printf("Ingrese la cantidad de datos a procesar  \n");
	scanf("%d",&n);
	
	printf("Ingrese un escalar \n");
	scanf("%d",&escalar);
	
	int datos1[n],datos2[n],datos3[n];
	
	printf("A continuacon ingrese los valores del primer vector : \n");
	
	for (i=0;i<n;++i) {
		
		printf("Ingrese un valor \n");
		scanf("%d",&valor);
		datos1[i] = (valor * escalar);
	}
	
	printf("A continuacon ingrese los valores del segundo vector : \n");
	for (i=0;i<n;++i) {
		
		printf("Ingrese un valor \n");
		scanf("%d",&valor);
		datos2[i] = (valor * escalar);
	}
	printf("Vector resultante del producto entre el escalar y el vector suma de los dos vectores leidos: \n");
	for (i=0;i<n;++i) {
		datos3[i] = (datos1[i] + datos2[i]);
		printf("%d \n",datos3[i]);
		
	}
	getche();
	
}
