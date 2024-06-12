#include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf("enter a number ");
	scanf("%d",&num);
	while(num>0){
		i=num%10;
		sum=sum+i;
		num=num/10;
	}
	printf("sum og given number is %d", sum);
}
