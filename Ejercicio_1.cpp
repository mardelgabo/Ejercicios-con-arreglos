#include <stdio.h>
#include <conio.h>

main () {
	int n,m=0, a[n],i,j=0,b[m], valor, suma=0;
	
	
	printf("ingrese la cantidad de elementos a analizar \n");
	scanf("%d",&n);
	
	for (i=0;i<n;++i) {
 		printf("Ingrese un numero \n");
 		scanf("%d",&valor);
 		a[i]= valor;
 		
 		if (valor>0) {
 			
 			b[j]= valor;
 			++j;
 			m=j;
 		}
	}
	
	for (j=0;j<m;++j) {
		
		suma+= b[j];
	}
	printf("La cantidad de elementos mayores a cero es %d \n",m);
	printf("La suma de los elementos mayores a 0 es %d \n",suma);
	
	
}
