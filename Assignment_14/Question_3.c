#include<stdio.h>
int main()
{
	int a[10],i,s1=0,s2=0;
	printf("Enter the 10 elements\n");
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	 {
	 	if(a[i]%2==0)
	 	  s1=s1+a[i];
	 	else
	 	  s2=s2+a[i];
	 }
	printf("Sum of Even numbers = %d\nSum of Odd numbers =%d",s1,s2);
	return 0;
}
