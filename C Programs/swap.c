#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter a and b values \n");
	scanf("%d %d", &a,&b);
	printf("values before swapping a and b are %d %d \n", a,b);
	temp=a;
	a=b;
	b=temp;
	printf("values after swapping are %d %d\n", a,b);
	
}
