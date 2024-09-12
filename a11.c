#include<stdio.h>
float main()

{ 
float total2, total, sci,math,eng,fre,soc ;
printf("Enter marks in science(out of 200): "); 
scanf("%f",&sci); 
printf("Enter marks in math((out of 200)): "); 
scanf("%f",&math);
printf("Enter marks in french((out of 200)): ");
scanf("%f",&fre);
printf("Enter marks in english((out of 200)): ");
scanf("%f",&eng);
printf("Enter marks in social science((out of 200)): ");
scanf("%f",&soc);
total =(sci + soc + fre + eng + math)/5;
total2 =(sci + soc + fre + eng + math)/1000*100;
printf("Your average marks in your class is:%f\n",total);
printf("Your percentage is:%f\n", total2);
return 0;
}

