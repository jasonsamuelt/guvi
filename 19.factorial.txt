#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
long long int fact;
fact =1;
printf("Enter number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
fact = fact*i;
}
printf("factorial is %ld",fact);
getch();
return 0;
}