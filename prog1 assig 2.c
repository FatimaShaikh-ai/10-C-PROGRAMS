#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2,result;
	char operators;
	
	printf("Enter 1st number:");
	scanf("%d",&num1);
	 
	printf("Enter 2nd number:");
	scanf("%d",&num2);
	
	printf("Enter an operator from one of them (+,-,*,/):");
	scanf(" %c", &operators);
	
	if (operators == '+'){
		result=num1+num2;
		printf("The result is: %d\n",result);
	}
	else if (operators == '-'){
		result=num1-num2;
		printf("The result is: %d\n",result);
		
	}
	else if (operators == '*'){
		result=num1*num2;
		printf("The result is: %d\n",result);
    }
    else if (operators == '/'){
		result=num1/num2;
		printf("The result is: %d\n",result);
    }
    else {
        printf("Invalid operator. Please enter one of +, -, *, /.\n");
    }

    return 0;
	
}
