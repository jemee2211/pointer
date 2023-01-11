#include<stdio.h>
main(){
	
	int a;
	int b;
	
	int *d;
	int *e;
	printf("Enter First Number: ");
	scanf("%d",&a);
	
	printf("Enter Second Number: ");
	scanf("%d",&b);
	
	
    d=&b;
	e=&a;
	
	printf("%u = %d\n",d,*d);
	printf("%u = %d\n",e,*e);
}
