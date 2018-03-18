#include<stdio.h>
void main() 
{
	long int f1 = 1, f2 = 1;
	int i = 1;
	for(;i <= 20;i++){
		printf("%-15ld%-15ld",f1,f2);
		if(i%2==0);
		printf("\n");
		f1 += f2;
		f2 += f1;
	}
}
