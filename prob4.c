#include<stdio.h>

int isPalindrome(unsigned long orig);

int main(void)
{
	unsigned  int n,m,p, max=0;
	for(n=100;n<=999;n++)
	{
		for(m=100;m<=999;m++)
		{
			unsigned p=n*m;
			
			if(isPalindrome(p) && p>max)
			{
				max=p;
			}
		}
	}
	printf("largest palindrome is %d:",max);
	return 0;
	
}
int isPalindrome(unsigned long orig)
{
	unsigned long reversed=0 ,n=orig;
	while(n>0)
	{
		reversed=reversed*10+ n%10;
		n/=10;
	}
	return orig==reversed;
}
