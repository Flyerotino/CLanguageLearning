#include<stdio.h>
main(){
	int x,m;
	scanf("%d",&x);
	m = sub(x);
	printf("m=%d",m);
}

int sub(x1)
int x1; // why x1 must be in the outside of the coulum
{
	int a,b,c,n;
	a = 6; b =30; c =15;
	if(x1 < a || x1 == a){
		n = b * x1 + a * a;
	}
	else{
		n = a * (c - x1) + c * c;
	}
	return(n);
}
