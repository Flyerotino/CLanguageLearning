#include<stdio.h>
/* Nothing */
void main(){
	int a,b,c,d; // 指定a，b，c，d为整形变量 
	unsigned u; // 指定u为无符号整形变量
	a = 12; b = -24; u = 10;
	c = a + u;
	d = b + u;
	printf("a+u=%d,b+u=%d\n",c,d);
}
