/* Josia Philip
CSE-B
13-02=2019 */


#include<stdio.h>
void main()
{
int num,digit,rev=0;
printf ("\nEnter an integer number:");
scanf("%d",&num);
while(num>0)
	{
	digit=num%10;
	rev=rev*10+digit;
	num=num/10;
	}
printf("\nReverse of the number is %d\n",rev);
}


