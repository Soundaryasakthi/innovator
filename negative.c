#include<stdio.h>
int main()
{
int a;
printf("enter the number:");
scanf("%d",&a);
if(a>0)
{
printf("Positive Number");
}
elseif(a<0)
{
printf("Negative Number");
}
else
{
printf("Zero");
}
return 0;
}
