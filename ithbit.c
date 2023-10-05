/*check ith bit is set or not (set means ith bit from right is 1 or not
1011 ----11
0100---- 1<<2
0----0 */
#include<stdio.h>
void main()
{
  int a=14,i=3;
 /* printf("enter value:");
  scanf("%d\n",&a);
   printf("enter position:");
  scanf("%d\n",&i);*/
if(a&(1<<(i-1)))
{
printf("yes");
}
else
{
printf("no");
}
}
