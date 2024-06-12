#include<stdio.h>
void main()
{
	int i,j,min,max,count;
	printf("enter min and max values");
	scanf("%d %d", &min,&max);
	for(i=min;i<=max;i++)
	{
		count=0;
		for(j=1; j<=i;j++){
			if(i%j==0){
				count=count+1;
			}
		}
		if(count==2){
			printf("\n %d", i);
		}
	}
}
