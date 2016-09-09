
#include<stdio.h>


int main()
{
	int a[100],i,n,x=0;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		x=x^a[i];
	}
	printf(" \n %d",x);
}