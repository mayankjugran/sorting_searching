
#include<stdio.h>


int main()
{

	int a[100],n,i,sum,sum_a;
	sum=sum_a=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	sum=n*(n+1)/2;
	for(i=0;i<n;i++)
		sum_a+=a[i];
	printf("\n  %d",(sum-sum_a));
	return 0;
}