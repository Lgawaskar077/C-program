// write a program five subject percentage and grade findout
#include<stdio.h>
void main()

{
    
    int marks1,marks2,marks3,marks4,marks5;
    int Total;
    float Percentage;
    printf("Enter Maths 1marks");
    scanf("%d",&marks1);
     printf("Enter Hindi 2marks");
    scanf("%d",&marks2);
     printf("Enter Science 3marks");
    scanf("%d",&marks3);
     printf("Enter Gujrati 4marks");
    scanf("%d",&marks4);
     printf("Enter English 5marks");
    scanf("%d",&marks5);
    
    Total=marks1+marks2+marks3+marks4+marks5;
    Percentage=((float)Total/500)*100;
    
    // result
    printf("\nTotal marks:%d \nPercentage:%.2f",Total,Percentage);
    
    if(Percentage>90 && Percentage<99)
   {
       printf("\nGrade=A+");
   }
    else if(Percentage>80 && Percentage<90)
    {
        printf("\nGrade=A");
    }
    else if(Percentage>70 && Percentage<79)
    {
        printf("\nGrade=B");
    }
    else if(Percentage>60 && Percentage<69)
    {
        printf("\nGrade=C");
    }
    else if(Percentage>50 && Percentage<59)
    {
        printf("\nGrade=D");
    }
    else if(Percentage>40 && Percentage<49)
    {
        printf("\nNeed to impove");
    }
}
    