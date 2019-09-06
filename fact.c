#include<stdio.h>
int main()
{
int y=fact(5);
printf("%d",y);
}
int fact(int x)
{
if(x==1)
return 1;
else
return x*fact(x-1);
}
