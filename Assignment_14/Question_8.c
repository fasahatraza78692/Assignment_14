#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n],i,s1,s2;
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	s1=arr[0];
	s2=arr[1];
	 for(i=2;i<n;i++)
	  {
	  	if(s2>arr[i])
	  	 	s2=arr[i];
		if(s2<s1)
		 {
		 	s1=s1+s2;
		 	s2=s1-s2;
		 	s1=s1-s2;
		 }
	  }
	printf("Second smallest = %d",s2);
	return 0;
}
