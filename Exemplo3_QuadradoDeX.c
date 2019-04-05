#include<stdio.h>

int quadrado(int x){ /*calcular o quadrado de x*/
	printf(" O quadrado eh %d", (x*x));
	return 0;
}
int main (){
	int num;
	printf("Entre com um numero: ");
	scanf("%d", &num);
	printf("\n\n");
	quadrado(num);
	return 0;
}
