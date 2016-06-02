#include<stdio.h>
#include<conio.h>
int main()
{
int n;
int j=0;
printf("Enter the integer");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
j=j++;
}
printf("The total number of digits is %d",j);
getch();
return(0);
}