//Metodo de Inserción
// Algoritmo base del metodo

#include<stdlib.h>
#include<stdio.h>

int main(){
	
	 //Se declaran las variables
	 //Una llamada "pos" que indicara la posicion del arreglo
	int i,pos,aux;	
	int numeros[] = {4,5,3,2,1};
	
	for(i=0;i<5;i++){
		pos = i;				//Indica en que posición se encuentra y lo recorrerá
		aux = numeros[pos];		//Indica en que numero del arreglo se encuentra
		
		while(pos>0 && numeros[pos-1]>aux){
			numeros[pos] = numeros[pos-1];		//Intercambio de valores
			pos--;								//	La posición va a ir disminuyendo
		}
		numeros[pos] = aux;
	}
	
	//Se imrpime de esta forma
	printf("Resultado ");
	for(i=0;i<5;i++){
		printf("%i, ",numeros[i]);
	}
	
	return 0;
}
