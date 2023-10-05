#include<stdio.h>
long long int fib(long long int);
int main()
{
	long long int n,i,r;
	scanf("%lld",&n);
     fib(n);


	return 0;
}
long long int fib(long long int n)
{
     int i,f1=0,f2=1,sum;
     printf(" %d %d ",f1,f2);
     for(i=0;i<n-2;i++)
     {
     	sum=f1+f2;
     	printf("%d ",sum);
     	f1=f2;
     	f2=sum;
	 }
	 
}

