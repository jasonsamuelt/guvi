#include<stdio.h>
#include<conio.h>
int main()
{
int n,flag=0,i;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%2==0)
{
flag=1;
break;
}
}
if(flag==1)
printf("%d is not a prime number",n);
else if(flag==0)
printf("%d is a prime number",n);
getch();
return 0;
}
