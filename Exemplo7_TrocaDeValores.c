#include<stdio.h>

int troca (int *a, int *b){
	int x;
	x = *a;
	*a = *b;
	*b = x;
	return (0);
}
main (){
	int n, k;
	printf("\n\nDigite dois valores inteiros\n");
	scanf("%d %d", &n, &k);
	printf("Antes da troca n = %d e k= %d \n", n, k);
	troca(&n, &k);
	printf("Depois da troca n = %d e k = %d \n", n, k);
	return (0);
}
