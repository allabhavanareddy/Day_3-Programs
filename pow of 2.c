#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,c=0;
	scanf("%d",&n);
     while(n)
     {
     	c++;
     	n=n&(n-1);
	 }
	 if(c==1)
	 {
	 	printf("true");
	 }
	 else
	 {
	 	printf("no");
	 }
	

}
