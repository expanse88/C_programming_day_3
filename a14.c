//WAP to convert a distance in meter entered through keyboard into its equivalent kilometer and meter as per the following format.
#include<stdio.h>
int main()
{
int k, m;
printf("Enter distance(in meter): ");
scanf("%d",&m);
k = m/1000;
m = m%1000;

printf("The distance(in kilometer and meter is ):%d kilometer and %d meter ", k,m);
return 0;


}
