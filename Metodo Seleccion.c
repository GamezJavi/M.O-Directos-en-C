//Metodo de seleccion
// Algoritmo base del metodo
/*Se busca el elemento más pequeño y se lleva a la posición 0,
despues continua con la siguiente posición*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,pos,aux,min=0;
	int numeros[] = {3,5,4,2,1};
	
	for(i=0;i<5;i++){
		min = i;	//Se declara el primer elemento como el menor	
				
		for(j=i+1;j<5;j++){
			if(numeros[j]<numeros[min]){	//si hay otro numero menor que "numeros[j]", entonces se
				min = j;					//situa al menor en esa posición
			}	
		}
		
		//Finalmente se hace el intercambio 
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	//Se imrpime de esta forma
	printf("Saldran de esta forma: ");
	for(i=0;i<5;i++){
		printf("%i, ",numeros[i]);
	}
	
	
	return 0;
}
