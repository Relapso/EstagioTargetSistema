#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int indice = 13, soma = 0, k=0;
	
	for(k =0 ; k < indice; k++){
		k += 1;
		soma +=k;
		}
		printf("O valor de soma eh: %d\n", soma);
	return 0;
}
