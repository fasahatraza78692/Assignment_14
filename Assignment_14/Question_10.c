#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	  	b[i]=a[i];
	for(i=0;i<n;i++)
	  printf("%d ",b[i]);
}
