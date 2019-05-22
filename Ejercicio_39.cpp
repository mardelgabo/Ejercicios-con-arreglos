#include <stdio.h>
#include <conio.h>

main() {
	int n=0,i,j,valor,valor2,suma=0,valor_max=0,control_patente;
	int Peso[n],Patente[n];
	float prom;
	
	

	
	for (i=0;i<n+1;++i) {
		printf("Ingrese peso del camion %d, para finalizar ingrese un peso mayor a 7500. \n",i+1);
		scanf("%d",&valor);
		if (valor>7500) {
			break;
		}
		Peso[i]=valor;
		++n;
		printf("Ingrese el numero de terminacion de la patente \n");
		scanf("%d",&valor2);
		Patente[i]=valor2;
		if(i%2!=0) {
			suma += valor2;
			++j;
		}
		if(valor2%2==0) {
			if (valor>valor_max){
				valor_max=valor;
				control_patente=valor2;
				
			}
		}
	}
	
	
	prom = suma/j;
	
	printf("El promedio de peso de los vehiculos ingresados en orden impar es: %f \n",prom);
	printf("Los datos del vehiculo con mayor peso y terminacion de patente par son: peso = %d , terminacion = %d.\n",valor_max,control_patente);
	for (i=0;i<n;++i) {
		if ((Peso[i]>1000)&&(i%2!=0)&&(Patente[i]%3==0)) {
			printf("Vehiculo %d, peso %d, terminacion patente %d \n",i+1,Peso[i],Patente[i]);
		}
	}
	
	getche();
}
