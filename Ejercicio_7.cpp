#include <stdio.h>
#include <conio.h>

main () {
	int n,m,i,valor,sumaN=0,sumaM=0;
	float promN,promM;
	
	printf("Ingrese la cantidad de elementos del primer arreglo \n");
	scanf("%d",&n);
	
	int N[n];
	printf("A continuacion ingrese los elementos del primer arreglo: \n");
	for (i=0;i<n;++i) {
		printf("Ingrese el elemento %d\n",i+1);
		scanf("%d",&valor);
		N[i]= valor;
		sumaN += N[i];
	}
	printf("Ingrese la cantidad de elementos del segundo arreglo \n");
	scanf("%d",&m);
	
	int M[m];
	printf("A continuacion ingrese los elementos del primer arreglo: \n");
	for (i=0;i<m;++i) {
		printf("Ingrese el elemento %d\n",i+1);
		scanf("%d",&valor);
		M[i]= valor;
		sumaM+= M[i];
	}
	promN = (sumaN/n);
	promM = (sumaM/m);
	
	printf("El promedio del primer arreglo es %f , el promedio del segundo arreglo es %f \n",promN,promM);
	if (promN > promM) {
		printf("El promedio del primer arreglo es mayor al promedio del segundo.\n");
	}
	if (promN<promM) {
		printf("El promedio del primer arreglo es menor al promedio del segundo.\n");
	}
	if (promN == promM) {
		printf("Los promedios de ambos arreglos son iguales.\n");
	}
	
}
