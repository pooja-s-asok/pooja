#include<stdio.h>
int main()
{
int a;
printf("enter a number \n");
scanf("%d",&a);
for(int i=0;i<100;i=i+a)
{
printf("%d \n",i);
}
}
