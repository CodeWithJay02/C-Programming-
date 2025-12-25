#include<stdio.h>
int main()
{
int number=0;
printf("Enter a number");
scanf("%d\n", & number);
if(number>0)
{
printf("Positive Number");
}
else if(number<0)
{
printf("Negative Number");
}
else
{
printf("Zero\n");
}
return 0;
}