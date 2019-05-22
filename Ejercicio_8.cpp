#include <stdio.h>
#include <conio.h>

main () {
	int n,m,i,valor,ceros1=0,ceros2=0;
	
	
	printf("Ingrese la cantidad de elementos del primer arreglo \n");
	scanf("%d",&n);
	
	int N[n];
	printf("A continuacion ingrese los elementos del primer arreglo: \n");
	for (i=0;i<n;++i) {
		printf("Ingrese el elemento %d\n",i+1);
		scanf("%d",&valor);
		N[i]= valor;
		if (valor==0) {
			++ceros1;
		}
	}
	printf("Ingrese la cantidad de elementos del segundo arreglo \n");
	scanf("%d",&m);
	
	int M[m];
	printf("A continuacion ingrese los elementos del primer arreglo: \n");
	for (i=0;i<m;++i) {
		printf("Ingrese el elemento %d\n",i+1);
		scanf("%d",&valor);
		M[i]= valor;
		if (valor==0) {
			++ceros2;
		}
	}
	if (ceros1>ceros2) {
		printf("El arreglo 1 tiene mayor cantidad de 0s con %d\n",ceros1);
	}
	if (ceros1<ceros2) {
		printf("El arreglo 2 tiene mayor cantidad de 0s con %d\n",ceros2);
	}
	if ((ceros1==ceros2)&&(ceros1!=0)) {
		printf("Los arrelgos tienen igual cantidad de 0s con %d\n",ceros1);
	}
	if ((ceros1==ceros2)&&(ceros1==0)) {
		printf("No existen 0s en los arreglos\n");
	}
	
		

}
