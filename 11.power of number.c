#include<stdio.h>
#include<conio.h>
int main()
{
int base,exponent;
long long result=1;
printf("Enter the base");
scanf("%d",&base);
printf("Enter the exponent");
scanf("%d",&exponent);
while(exponent!=0)
{
result = result * base;
exponent--;
}
printf("power of the no is %ld",result);
getch();
return(0);
}

