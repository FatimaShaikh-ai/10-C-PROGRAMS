#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3;
	
	printf("Enter three numbers:\n");
	scanf("%d%d%d", &num1,&num2,&num3);
	
	if (num1>num2 && num1>num3)
	{
		printf("GREATER NUMBER IS num1 %d",num1);
	}
	else if (num2>num1 && num2>num3)
	{
		printf("GREATER NUMBER IS num2 %d",num2);
	}
	else if (num3>num1 && num3>num2)
	{
		printf("GREATER NUMBER IS num3 %d",num3);
	}
	else 
	{
		printf("all numbers are equal.");
	}
	getch();
}
