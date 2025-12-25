#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of A:");
scanf("%d",& a);
printf("Enter the value of B:");
scanf("%d",& b);

a=a+b;
b=a-b;
a=a-b;
printf("After swaping:");
printf("A=%d\n",a);
printf("B=%d\n",b);
return 0;
}