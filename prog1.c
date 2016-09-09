
// to print the 2 missing numbers in an array of n-2 elements

#include<stdio.h>
#include<math.h>


int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}

int main()
{
	int a[100],i,n,sum,prod,sum_a,prod_a,root1,root2,root;
	sum_a=0;
	prod_a=1;
	scanf("%d,&n);
	sum=n*(n+1)/2;
	prod=fact(n);
	for(i=0;i<n-2;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-2;i++)
	{
		sum_a+=a[i];
		prod_a*=a[i];
	}
	root1=sum-sum_a;
	root2=prod/prod_a;
	root=sqrt(pow(root1,2)-(4*prod_a));
	
	printf("\n %d",((root1+root)/2));
	printf("  %d",((root1-root)/2));
	return 0;
}
	