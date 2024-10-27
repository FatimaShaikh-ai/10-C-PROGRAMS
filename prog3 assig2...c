#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	printf("ELIGIBLITY FOR VOTING");
	printf("Enter your age :");
	scanf("%d",&age);
	
	if (age >=18)
	{
		printf("YOU ARE ELIGIBLE FOR VOTING.");
		
	}
	else
	{
		printf("YOU ARE NOT ELIGIBLE FOR VOTING.");
	}
	getch();
	
}
