//WAP to find the sum of 1st and last of a six-digit number. Number must be a user input.

#include<stdio.h>
int main()
{
int n3, n,n1,n2;

printf("Enter a 6 digit number: ");
scanf("%d",&n);
printf("Enter the first digit of the number: " );
scanf("%d",&n1);
printf("Enter the last digit of the number: " );
scanf("%d",&n2);
n1 = n/100000;
n2 = n%10;
n3 = n1+n2;
printf("The sum of first and last digits of the number are: %d",n3 );
return 0;
}
