#include <stdio.h>
#include <conio.h>

main() {
	int i,n,valor,A,B,suma=0,acu=0,acu2=0;
	float prom;
	
	printf("Ingrese el valor A\n");
	scanf("%d",&A);
	printf("Ingrese el valor B\n");
	scanf("%d",&B);
	
	printf("Ingrese la cantidad de elementos que tendrá el arreglo\n");
	scanf("%d",&n);
	
	int arreglo[n];
	printf("A continuacion ingrese los elementos del arreglo:\n");
	for (i=0;i<n;++i) {
		printf("Ingrese el elemento %d:\n",i+1);
		scanf("%d",&valor);
		arreglo[i]= valor;
			if (valor>B) {
				suma += valor;
				++acu;
			}
			if (valor<A) {
				++acu2;
			}
	}
	prom = (suma/acu);
	printf("El promedio de los elementos del arreglo mayores a B es: %f\n",prom);
	printf ("La cantidad de elementos del arreglo menores que A es: %d\n",acu2);
	getche();
}
