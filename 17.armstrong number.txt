#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,p=0,j;
printf("Enter the number");
scanf("%d",&n);
j=n;
while(n!=0)
{
m=n%10;
n=n/10;
p=p+(m*m*m);
}
if(j==p)
{
printf("%d is armstrong number",j);
}
else
{
printf("%d is not armstrong number",j);
}
return(0);
}