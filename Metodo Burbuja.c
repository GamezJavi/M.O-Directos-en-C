//Metodo Burbuja
//Algoritmo base del metodo

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,aux;
	int numeros[] = {3,5,4,2,1};
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			//Numero mayor de la izquierda
			if(numeros[j]>numeros[j+1]){
			
				//Se realiza el intercambio
				aux =  numeros[j];			
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux; 
			}
		}
	}
	
	//Se imrpime de esta forma
	printf("Resultado:  ");
	for(i=0;i<5;i++){
		printf("%i, ",numeros[i]);
	}
	
	return 0;
}
