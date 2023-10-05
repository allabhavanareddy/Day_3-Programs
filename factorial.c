#include<stdio.h>
long long int factorial(long long int);
int main()
{
	long long int fact=1,n,r;
	scanf("%lld",&n);
    r=factorial(n);
	printf("factorial :%lld",r);	
	return 0;
}
long long int factorial(long long int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*factorial(n-1);
}
