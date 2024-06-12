#include<stdio.h>
void main()
{
	int T,H,E,M,S,So,Total ,Avg;
	printf("enter  all subject marks = \n");
	scanf("%d %d %d %d %d %d" , &T , &H, &E, &M, &S, &So);
	Total = T+H+E+M+S+So;
	printf(" \n total marks are= %d" , Total);
	Avg=Total/6;
	printf(" \n average marks of student is = %d", Avg);
	if(Avg>=90)
	printf("\n Student Grade is - O");
	else if(Avg>=80 && Avg<89)
	printf("\n Student Grade is - A");
	else if(Avg>=70 && Avg<79)
	printf("\n Student Grade is - B");
	else if(Avg>=60 && Avg<69)
	printf("\n Student Grade is - C");
	else if (Avg>=50 && Avg<59)
	printf("\n Student Grade is - D");
	else if(Avg>=40 && Avg<49)
	printf("\n pass");
	else
	printf("\n FAIL");
}
