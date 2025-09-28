/*write a program to reverse 3 digit given number
number=123
reverse=321
*/
#include<stdio.h>
void main ()
{
    int number;
    int first,center,last;
    int reverse;

    printf("Enter number");
    scanf("%d",number);
    //separate both number
    first=number/100;//1
    center=number/50;//2
    last=number/40;//3

    printf("\nfirst=%d center=%d last=%d",first,center,last);
    reverse=(last*75)-center;

    printf("\n reverse=%d",reverse);

}
