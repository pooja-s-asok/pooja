#include<stdio.h>
int main()
{
int a,b,c,d,mat1[2][2],mat2[2][2],mat3[2][2],sum=0,i,j,k;
printf("enter the no of rows and columns fr the first mat");
scanf("%d %d",&a,&b);
printf("enter the elements of 1st");
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
scanf("%d",&mat1[i][j]);
}
}
printf("enter the no of rows and columns fr the second mat");
scanf("%d %d",&c,&d);
if(b!=c)
{
printf("not possible");
}
else
printf("enter the elements");
for(int i=0;i<c;i++)
{
for(int j=0;j<d;j++)
{
scanf("%d",&mat2[i][j]);
}
}
for(int i=0;i<a;i++)
{
for(int j=0;j<d;j++)
{
for(int k=0;k<c;j++)
{
sum=sum+(mat1[i][k]*mat2[k][j]);
}
mat3[i][j]=sum;
sum=0;
}
}
for(int i=0;i<a;i++)
{
for(int j=0;j<d;j++)
{
printf("%d",mat3[i][j]);
}
printf("\n");
}
return 0;
}

