#include<stdio.h>
#include<conio.h>
int main()
{
long long int j,num,m,n;
j=0;
printf("Enter the number");
scanf("%lld",&n);
num=n;
while(num!=0)
{
m=num%10;
num=num/10;
j=j+m;
j=j*10;
}
j=j/10;
printf("%lld",j);
if(j==n)
{
printf("palindrome");}
else                {
printf("not a palindrome");}
getch();
return(0);
}
