#include<stdio.h>
void main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
{
	if(a[i]!=i)
	{

	printf("%d",i);
	break;	
	}
}
}
