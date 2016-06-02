#include<stdio.h>
#include<conio.h>
int main()
{
//float i;
long int n,r=0;
printf("Enter number");
scanf("%ld",&n);
while(n!=0)
{
r=r*10;
r=r+ n%10;
n=n/10;
}
printf("%ld",r);
getch();
return 0;
}