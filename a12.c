#include<stdio.h>
int main ()
{
int p, r;
printf ("Enter the rupee:\n ");
scanf("%d",&r);
p = r*100;
printf("The amount of paisa you have is:%d\n",p);
printf ("Enter the paisa:\n ");
scanf("%d",&p);
r = p/100;
printf("The  amount of rupee you have is :%d\n",r);
return 0;
}
