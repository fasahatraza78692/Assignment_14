#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n],i,g1,g2;
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	g1=arr[0];
	 for(i=1;i<n;i++)
	  {
	  	if(arr[i]>g1)
	  	 {
	  	 	g2=g1;
	  	 	g1=arr[i];
		 }
	  }
	printf("Second largest = %d",g2);
	return 0;
}
