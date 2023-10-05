#include<stdio.h>
void main()
{
	int a,c=0;
	scanf("%d",&a);
	while(a)
	{
		c++;
		a=a&(a-1);
	}
	
	
	/*while(a>0)
	{
		if(a&1)
		{
			c++;
		}
		a>>1;
	}*/
		printf("count set bits :%d",c);
	
}
	
