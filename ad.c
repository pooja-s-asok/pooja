#include<stdio.h>
int add(int a,int b)
{
if(!a)
return b;
else
return add(a&b<<1,a^b);
}
int main()
{
int y=add(5,4);
printf("%d",y);
}
