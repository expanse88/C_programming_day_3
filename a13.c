 #include<stdio.h>
int main ()
{
int s,h,m;
printf("Enter  the time(in seconds): ");
scanf("%d",&s);

h = s/3600;
s = s%3600;
m = s/60;
s = s%60;
printf("The time in hours is:%d ",h);
printf("The time in minutes is:%d ",m);
printf("The time in seconds is:%d", s);
return 0;
}
