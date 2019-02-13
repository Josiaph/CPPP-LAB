/* Josia Philip
CSE-B
13-02=2019 */

#include<stdio.h>
void main()
{
int num,digit,arm=0,num1;
printf ("\nEnter an integer number:");
scanf("%d",&num);
num1=num;
while(num>0)
	{
	digit=num%10;
	arm=arm+digit*digit*digit;
	num=num/10;
	}
if (num1==arm)
	printf("%d is an Amstrong number!!!\n",num1);
else
	printf("%d is NOT Amstrong number!!!\n",num1);
}
