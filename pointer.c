#include<stdio.h>
main(){
	
	int a;
	int b;
	int *c;
	
	printf("Enter Number: ");
	scanf("%d",&a);
	b=a*a;
	c = &b;
	
	printf("%u = squar:%d\n",c,*c);
	
	
}
