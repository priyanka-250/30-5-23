#include<stdio.h>

void divi(int a)
{
	if(a%3==0&&a%5==0)
	{
		printf("number is divisible 3&5");
		
	}
	else
	{
		printf("number is not divisible 3&5");
	}
	
}
int main()
{
	int a;
	a=11;
	divi(a);
	return 0;
}

