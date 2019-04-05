#include<stdio.h>
#include<conio.h>
int troca (int *a, int *b){
	int x;
	if (*a > *b){
		x = *a;
		*a = *b;
		*b = x;
	}
	return 0;
}
main(){
	int vetor [9], i , j;
	char tecla;
	printf("\n\nORDENAÇAO DO VETOR \n\n");
	for(i=0; i<=9; i++){
		printf("Entro com o %do. elemento: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<=9; i++)
		for (j = i+1; j<=9; j++)
			troca(&vetor[i], &vetor[j]);
	for (i=0; i<=9; i++)
	printf("%do. elemento: %d \n\n", i+1, vetor[i]);
	system("pause");
	return 0;
}
