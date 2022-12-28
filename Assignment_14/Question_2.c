#include<stdio.h>
int main()
{
	int a[10],i;
	float sum=0;
	printf("Enter the 10 elements\n");
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	  sum=sum+a[i];
	printf("Avarage of all the elements of array = %.2f",sum/10);
	return 0;
}
