/*write a program to accept 2 number digit and findout addition,subtraction,multiplication,division and display result per choice persion*/ 
#include<stdio.h>
void main()
{
    int number1,number2,addition, subtraction, multiplication,choice;
    float division;
    printf("Enter first number=");
    scanf("%d",&number1);
    printf("Enter second number=");
    scanf("%d",&number2);
    
    printf("\n1.Addition=(+)");
    printf("\n2.Subtraction=(-)");
    printf("\n3.Multiplication=(*)");
    printf("\n4.Division=(/)");
     printf("\nEnter your choice(1 to 4)=");
    scanf("\n%d",&choice);
    
    switch (choice)
    {
    case 1:
    addition=(number1+number2);
    printf("\naddition=%d",addition);
    break;
    case 2:
    subtraction=(number1-number2);
    printf("\nsubtraction=%d",subtraction);
    break;
    case 3:
    multiplication=(number1*number2);
    printf("\nmultiplication=%d",multiplication);
    break;
    case 4:
    division=(number1/number2);
    printf("division=%.2f", division);
    break;
    
    default :
    printf("\ninvalid number");
    break; 
    }
}
        