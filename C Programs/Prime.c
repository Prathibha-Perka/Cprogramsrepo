#include<stdio.h>
void main()
{
	int i,count=0,num;
	printf("enter a number");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			count=count+1;
		}
	}
	if(count==2){
		printf("number is prime");
	}
	else
	printf("number is not a prime");
}
