#include<stdio.h>

int mult (float a, float b,float c){
	printf("%f", a*b*c);
	return 0;
}
int main(){
	float x,y;
	x= 5.5;
	y= 2;
	mult(x, y, 2.5);
	return 0;
}

