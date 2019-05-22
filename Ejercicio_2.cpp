#include <stdio.h>
#include <conio.h>

main() {
	
	int n,i,primer_cero,ultimo_cero, suma_mayores=0,cont=0;
	float prom,suma=0;
	
	printf("Ingrese la cantidad de datos a procesar \n");
	scanf("%d",&n);
	
	int datos[n];
	
	
	for (i=0;i<n;++i) {
		
		printf("Ingrese un valor \n");
		scanf("%d",&datos[i]);
		suma += datos[i];
	}
	printf("la suma es %f \n",suma);
	

	
	for (i=0;i<n;++i) {
		if (datos[i]== 0) {
			primer_cero= i;
			i=n;
		}
	}
	
	


	for (i=n-1;(i<n && i>0);--i) {
		if (datos[i]== 0) {
			ultimo_cero= i;
			i=-1;
		}
	}
;	


	for (i=primer_cero +1; i<= ultimo_cero; ++i) {
		if(datos[i]>0){
		
		suma_mayores += datos[i];
		++cont;}
	} 
	
	prom= (suma_mayores / cont);
	
	printf("el promedio de los elementos mayores que cero entre el primer valor nulo y el ultimo es %f \n",prom);
	printf("La suma de todos los elementos es %f \n",suma);
	getche();
	
}

