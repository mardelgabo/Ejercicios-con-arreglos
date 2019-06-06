#include <stdio.h>
#include <conio.h>

main () {
	//DECLARO VARIABLES
	int n=100,Enteros[n],Positivos[n],Negativos[n],i,c=0,d=0,x;
	//INSERTO UN PRINT EXPLICANDO EL SISTEMA
	printf("A continuacion podra ingresar hasta 100 numeros enteros, para finalizar ingrese 0 \n");
	//UTILIZO UN FOR PARA CARGAR EL ARREGLO
	for (i=0;i<n;++i) {
		printf("Ingrese un numero entero \n");
		scanf("%d",&Enteros[i]);
		//UTILIZO UN IF PARA CONTROLAR SI INGRESAN UN CERO, SI LO INGRESAN, LA SENTENCIA BREAK NOS SACA DEL FOR
		if(Enteros[i]==0) {
			x=i; //GUARDO LA CANTIDAD i EN LA VARIABLE x, PARA PODER USARLA COMO CONTROL CUANDO MUESTRE EL ARREGLO
			break;
		}
		//ESTE IF GUARDA LOS VALORES POSITIVOS EN EL ARREGLO CORRESPONDIENTE 
		if(Enteros[i]>0){
			Positivos[c]=Enteros[i];
			++c; //LA VARIABLE c ME DA LA CANTIDAD DE ELEMENTOS POSITIVOS PARA CUANDO LO TENGA QUE MOSTRAR
		}
		//ESTE IF GUARDA LOS VALORES NEGATIVOS EN EL ARREGLO CORRESPONDIENTE
		if(Enteros[i]<0){
			Negativos[d]= Enteros[i];
			++d; //LA VARIABLE d ME DA LA CANTIDAD DE ELEMENTOS NEGATIVOS PARA CUANDO LO TENGA QUE MOSTRAR
		}
	}
	//MOSTRAMOS LOS ELEMENTOS DEL ARREGLO PRINCIPAL
	printf("Los elementos del arreglo principal son: \n");
	for(i=0;i<x;++i){ //UTILIZO LA VARIABLE x PARA DECIRLE AL FOR HASTA DONDE MOSTRAR EL ARREGLO
		printf("%d \n",Enteros[i]);
	}
	//MOSTRAMOS LOS ELEMENTOS DEL ARREGLO DE POSITIVOS
	printf("Los elementos positivos son: \n");
	for(i=0;i<c;++i){ //UTILIZO LA VARIABLE c PARA DECIRLE AL FOR HASTA DONDE MOSTRAR EL ARREGLO DE POSITIVOS
		printf("%d \n",Positivos[i]);
	}
	//MOSTRAMOS LOS ELEMENTOS DEL ARREGLO DE NEGATIVOS
	printf("Los elementos negativos son: \n");
	for (i=0;i<d;++i){ //UTILIZO LA VARIABLE d PARA DECIRLE AL FOR HASTA DONDE MOSTRAR EL ARREGLO DE NEGATIVOS
		printf("%d \n",Negativos[i]);
	}
	getche();
}
