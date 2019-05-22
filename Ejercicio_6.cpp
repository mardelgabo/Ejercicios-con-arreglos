#include <stdio.h>
#include <conio.h>

main() {
	int i,n,A,valor,producto=1,mayor_que_cero=0,igual_que_cero=0,menor_que_cero=0,suma=0;
	
	printf("Ingrese la cantidad de elementos a utilizar \n");
	scanf("%d",&n);
	
	int arreglo[n];
	
	printf("A continuacion ingrese los elementos del arreglo \n");
	for (i=0;i<n;++i) {
		printf("Elemento %d:\n",i+1);
		scanf("%d",&valor);
		arreglo[i]= valor;
	}
	
	printf("A continuacion debera ingrese una opcion del 0 al 4: \n");
	printf("0 obtendra el prodcuto de las componentes del arreglo.\n");
	printf("1 obtendra la cantidad de componentes mayores que 0.\n");
	printf("2 obtendra la cantidad de componentes iguales a 0.\n");
	printf("3 obtendra la cantidad de componentes menores a 0.\n");
	printf("4 obtendra la suma de las componentes.\n");
	scanf("%d",&A);
	
	switch (A) {
		case 0 : for (i=0;i<n;++i) {
					producto *= arreglo[i];
					}
				printf("El producto de las componentes es %d\n",producto);
				break;
				
		case 1 : for (i=0;i<n;++i) {
			if (arreglo[i]>0) {
				++mayor_que_cero;
			}
					}
					printf("La cantidad de elementos mayores a cero es %d\n",mayor_que_cero);
					break;
		case 2 : for (i=0;i<n;++i) {
			if (arreglo[i]==0) {
				++igual_que_cero;
			}
					}
					printf("La cantidad de elementos mayores a cero es %d\n",igual_que_cero);
					break;
		case 3 : for (i=0;i<n;++i) {
			if (arreglo[i]<0) {
				++menor_que_cero;
			}
					}
					printf("La cantidad de elementos mayores a cero es %d\n",menor_que_cero);
					break;
		case 4 : for (i=0;i<n;++i) {
					suma += arreglo[i];
					}
					printf("La suma de las componentes es %d\n",suma);
					break;
		default : printf("Opcion incorrecta\n");			
	}
	
}
