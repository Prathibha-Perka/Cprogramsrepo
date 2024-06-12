#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,sum,sub,mul;
	 float div,mod;
	printf("enter a and b values = ");
	scanf("%d %d", &a, &b);
	sum = a+b;
	printf(" \n sum of a and b = %d", sum);
	sub=a-b;
	printf("\n substraction of a and b = %d", sub);
	mul= a*b;
	printf("\n multiplication of a and b = %d", mul);
	div=a/b;
	printf("\n division of a and b = %f", div);
	mod=a%b;
	printf("\n modulus od a and b = %f", mod);
}
