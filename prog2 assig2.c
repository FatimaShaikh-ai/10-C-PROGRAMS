#include<stdio.h>
#include<conio.h>

int main(){
	int checker;
	printf("Enter a number\n I will check it is even number or odd number:");
	scanf("%d",&checker);
	
	if (checker%2==0)
	{
		printf("The number is even ");
	}
	else 
	{
		printf("The number is odd.");
	}
	return 0;
}
