#include<stdio.h>

int soma_dobro(int a, int b){
	int soma;
	a = 2*a;
	b= 2*b;
	soma= a + b;
	return (soma);
}
main(){
	int x, y, resultado;
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	resultado = soma_dobro(x, y);
	printf("A soma do dobro dos numeros eh: %d", resultado);
}
