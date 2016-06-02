#include<stdio.h>
#include<conio.h>
int main()
{
int int1,int2,i,j;
printf("enter interval1,interval2");
scanf("%d%d",&int1,&int2);
if(int1%2==0)
{
j=int1;
}
else
{
j=int1+1;
}
printf("even nos are");
for(i=j;i<int2;i=i+2)
{
printf("%d,",i);
}
getch();
return 0;
}