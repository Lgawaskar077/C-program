#include<stdio.h>
void main()
{
    int Month;
    printf("Enter Month Number(1 to 12)");
    scanf("%d",&Month);
    
    switch(Month)
    {
        case 1:
        printf("Month=January\nDay=31");
        break;
        case 2:
        printf("Month=Februray\nDay=28/29");
        break;
        case 3:
        printf("month=March\nDay=31");
        break;
        case 4:
        printf("month=April\nDay=30");
        break;
        case 5:
        printf("month=May\nDay=31");
        break;
        case 6:
        printf("month=June\nDay=30");
        break;
        case 7:
        printf("month=July\nDay=31");
        break;
        case 8:
        printf("month=August\nDay=31");
        break;
        case 9:
        printf("Month=September\nDay=30");
        break;
        case 10:
        printf("Month=October\nDay=31");
        break;
        case 11:
        printf("Month=November\nDay=30");
        break;
        case 12:
        printf("Month=December\nDay=31");
        break;
        
        default:
        printf("Sorry invaid Month Number");
        break;
    }
    
    
} 