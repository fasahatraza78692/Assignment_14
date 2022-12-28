#include<stdio.h>
int main()
{
	int a[10],i,x;
	printf("Enter the 10 elements\n");
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	  x=a[0];
	for(i=1;i<10;i++)
	   {
	   	if(a[i]>x)
	      x=a[i];
	   }
	printf("Greatest value = %d",x);
	return 0;
}
