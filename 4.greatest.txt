#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n3;
printf("Enter the three numbers");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2&&n1>n3)
{
printf("%d is grater number",n1);
}
else if(n2>n1&&n2>n3)
{
printf("%d is grater number",n2);
}
else
{
printf("%d is grater number",n3);
}
getch();
return(0);
}
