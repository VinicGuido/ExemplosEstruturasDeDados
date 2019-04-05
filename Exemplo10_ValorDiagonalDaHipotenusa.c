#include<stdio.h>
#include<math.h>
float a, b, c, D;
float hipotenusa (float a, float b){
	return(sqrt(a*a + b*b));
}
main(){
	printf("Entre com o valor A: ");
	scanf("%f", &a);
	printf("Entre com o valor B: ");
	scanf("%f", &b);
	printf("Entre com o valor C: ");
	scanf("%f", &c);
	D = hipotenusa(hipotenusa(a, b), c);
	printf("O valor da diagonal eh: %f", D);
	return (0);
}
