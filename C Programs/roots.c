#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,root1,root2;
	printf("enter a ,b , c values= \n");
	scanf("%f %f %f" , &a,&b,&c);
	d= (b*b) - (4*a*c);
	printf(" \n d value is = %f", d);
	if(d==0)
	{
	printf(" \n roots are real and equal");
	root1= (-b+sqrt(d))/(2*a);
	printf("\n root1 value is = %f" , root1);
	root2= (-b+sqrt(d))/(2*a);
	printf("\n root2 value is = %f" , root2);
	
	}
	else if(d>0)
	{
		printf("roots are real and unequal");
		root1= (-b)/(2*a);
		printf("\n root1 value is = %f" , root1);
		root2= (-b)/(2*a);
		printf("\n root2 value is = %f" , root2);
	}
	else
	{
		printf("roots are imagenary");
	}
	
}
