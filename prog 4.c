#include<stdio.h>
#include<math.h>

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
	int a[100],b[100],i,n,k,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
		b[i]=pow(a[i],2);
	}
	quick_sort(b,0,n-1);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		r=n-1;
		l=0;
		
		while(l<r)
		{
			if(b[l]+b[r]==pow(k,2))
			{
				a=l;
				b=r;
				d=j;
				c=1;
				break;
			}
			else if(b[l]+b[r]<pow(k,2))
				l++;
			else
				r--;
		}
		if(c)
			break;
	}
	if(c)
		printf("\n Not Found");
	else
		for(i=0;i<n;i++)
		{
			if(b[a]==pow(a[i],2))
				printf("  %d",i);
			if(b[b]==pow(a[i],2))
				printf("  %d",i);
			if(b[d]==pow(a[i],2)
				printf("  %d",i);		
		}
	return 0;
}
	
	return 0;
}

	
	