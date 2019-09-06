#include<stdio.h>
int main()
{
int x;
printf("who is the captian of Indian cricket team? \n Your options are \n 1.Dhoni \n 2.Virat \n 3.Sachin \n 4.Hardik \n 5.Rohit");
scanf("%d",&x);
switch(x)
{
case 1:
printf("NO \n Dhoni is not the present captain of Indian cricket team");
break;
case 2:
printf("YES \n Virat is  the present captain of Indian cricket team");
break;
case 3:
printf("NO \n Sachin is not the present captain of Indian cricket team");
break;
case 4:
printf("NO \n Hardik is not the present captain of Indian cricket team");
break;
case 5:
printf("NO \n Rohit is not the present captain of Indian cricket team");
break;
default:
printf("ERROR \n please select the options given");
}
}

