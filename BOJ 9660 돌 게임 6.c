#include<stdio.h>
int main(void)
{
	long long n;
	scanf("%lld",&n);
	if(n%7==2 || n%7==0)
		printf("CY");
	else
		printf("SK");
}
