#include<stdio.h>

int resulvalor(int x, int y){
	return x*y;
}
main(){
	int saida;
	saida = resulvalor (5, 12);
	printf("A saida eh %d", saida);
	return 0;
}
