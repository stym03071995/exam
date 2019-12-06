#include<stdio.h>
int main()
{
  int num=121;
int rev=0,sum=0,num1=num;
  while(num!=0)
{
 rev=num%10;
sum=sum*10+rev;
num=num/10;
 }

if(sum==num1)
{
printf("num is palindrome %d ",sum);
}
else
{
printf("num is  not a palindrome %d ",sum);
}
return 0;



}
