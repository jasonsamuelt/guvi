#include<stdio.h>
#include<conio.h>
int main()
{
int flag,i,j,start,end;
printf("Enter the start and ending number");
scanf("%d%d",&start,&end);
j=start;
while(j<=end)
{
 flag=0;
 for(i=2;i<=j/2;++i)
 {
  if(j%i==0)
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
 {
 printf("%d is not a prime number\n",j);
 }
 else if(flag==0)
 {
 printf("%d is a prime number\n",j);
 }
 j++;
}
getch();
return 0;
}
