/* write a program to reverse 2 digit given number
   number = 13
   reverse = 31
   number = 89
   reverse = 98
*/
#include <stdio.h>
void main()
{
    int number;
    int first,last;
    int reverse;
    printf("Enter number");
    scanf("%d",&number); // 67
    //separate both numbers 
    first = number/10; //6
    last = number%10; //7
    printf("\n first = %d last = %d",first,last);
    reverse = (last * 10) + first;
    printf("\n reverse = %d",reverse);
}