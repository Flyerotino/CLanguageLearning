#include<stdio.h>
void main(){
	float a;
	double b;
	a = 33333.33333;
	b = 33333.333333333333333; // 只保留小数点后6位 
	printf("%f\n%f\n",a,b);
}
