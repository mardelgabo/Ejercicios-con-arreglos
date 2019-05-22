#include <stdio.h>
#include <conio.h>

main () {
	int i,n,valor,suma=0,A,B,cont;
	
	printf("Ingrese el valor del intervalo inferior \n");
	scanf("%d",&A);
	printf("Ingrese el valor del intervalo superior \n");
	scanf("%d",&B);
	
	printf("Ingrese la cantidad de elementos del arreglo N \n");
	scanf("%d",&n);
	
	int N[n];
	for (i=0;i<n;++i) {
		printf("Ingrese el valor del elemento %d \n",i+1);
		scanf("%d",&valor);
		N[i]= valor;
		if ((valor>=A)&&(valor<=B)) {
			suma+= valor;
		}
		else {
			++cont;
		}
	}
	printf("La suma de los elementos que pertenecen al intevalo (A,B) es: %d \n",suma);
	printf("La cantidad de elementos que no pertenecen al intervalo es: %d \n",cont);
	getche();
}
