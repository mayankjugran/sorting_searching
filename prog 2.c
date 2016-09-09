#include<stdio.h>
#include<conio.h>


void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}


int main()
{
	int a[100],i,n,k,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	r=n-1;
	l=0;
	quick_sort(a,l,r);
	while(L<r)
	{
		if(a[l]+a[r]==k)
		{
			printf("\n  %d  %d ",a[l],a[r]);
			c=1;
			break;
		}
		else if(a[l]+a[r]<k)
			l++;
		else
			r--;
	}
	if(c)
		printf("\n Not Found");
	return 0;
}

	
	