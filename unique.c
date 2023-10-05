#include<stdio.h>
void main()
{
	int a[5]={1,1,2,3,3};
	int x=0,i=0;

	for(i=0;i<5;i++)
	x=x^a[i];
	printf("%d",x);
}

