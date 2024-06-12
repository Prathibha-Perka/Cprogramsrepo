#include<stdio.h>
void main()
{
	float sal,tax;
	printf("enter the salary ");
	scanf("%f",&sal);
	if(sal>25000){
		tax=sal*0.17;
	printf("\n tax of the employee %f",tax);
	sal=sal-tax;
	printf(" \n remaining salary= %f" , sal);
}
	else{
		printf("salary is =%f",sal);
	}
}
