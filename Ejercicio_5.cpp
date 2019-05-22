#include <stdio.h>
#include <conio.h>

main () {
	
	int A,B,n,i,valor,menor_valor_1,menor_valor_2,resultado=0;
	
	printf("Ingrese la cantidad de datos a procesar \n");
	scanf("%d",&n);
	
	int datos1[n],datos2[n],suma[n];
	printf("Ingrese a continuacion los valores del primer vector \n");
	
	for (i=0;i<n;++i) {
		printf("Ingrese un valor \n");
		scanf("%d",&valor);
		datos1[i]= valor;
	}
	
	printf("Ingrese a continuacion los valores del segundo vector \n");
	
	for (i=0;i<n;++i) {
		printf("Ingrese un valor \n");
		scanf("%d",&valor);
		datos2[i]= valor;
	}
	
	
	do {
	
	printf("Ingrese el numero para A \n");
	scanf("%d",&A);
	printf("Ingrese el numero para B \n");
	scanf("%d",&B);
	
	  
	
	if (A>B) {
		menor_valor_1=datos1[0];
		menor_valor_2=datos2[0];
		for (i=0;i<n;++i) {
			
			if (menor_valor_1 <=datos1[i]) {
				menor_valor_1 = datos1[0];
			}
			else {
				menor_valor_1= datos1[i];
			}
		}
		for (i=0;i<n;++i) {
			
			if (menor_valor_2<=datos2[i]) {
				menor_valor_2 = datos2[0];
			}
			else {
				menor_valor_2= datos2[i];
			}
		}
		printf("La menor componente del vector 1 es %d \n",menor_valor_1);
		printf("La menor componente del vector 2 es %d \n",menor_valor_2);
	}
	
	if ((A==B)&&(A!=0)&&(B!=0)) {
		for (i=0;i<n;++i) {
			suma[i] = datos1[i]+datos2[i];
		}
		printf("El vector suma es: \n");
		for (i=0;i<n;++i) {
			printf("%d \n",suma[i]);
		}
	}
	
	if (A<B) {
		for (i=0;i<n;++i) {
		
		resultado += datos1[i]*datos2[i];
	}
	
	printf("El producto escalar entre ambos vectores es: %d \n",resultado);
	}
}
 while ((A!=0)&&(B!=0));
printf("Presione una tecla para salir \n");
getche();
}
