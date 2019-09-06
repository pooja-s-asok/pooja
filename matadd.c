 #include<stdio.h>
void input(int a[][2])
{
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
}
int mult(int a[][2],int b[][2])
{
int sum=0;
int c[i][j];
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
sum=sum+a[i][j]*b[i][j];
c[i][j]=sum;
printf("%d",c[i][j]);
}
printf("\n");
}
}
int main()
{
int a[2][2];
int b[2][2];
input(a);
input(b);
mult(a,b);
return 0;
}


