

#include<stdio.h>

int abs(int n)
{
	if(a<0)
		return(n*(-1));
	else
		return n;
}

int main()
{
	int a[100],i,temp,n,flag=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[abs(a[i])]>0 && a[abs(a[i])] !=n)
			a[abs(a[i])]=a[abs(a[i])]*(-1);
		else if(a[abs(a[i])<0||a[abs(a[i])]==n)
		{
			printf("\n Yes");
			flag=1;
			break;
		}
		else
			a[abs(a[i])]=n;

	}	
	if(flag==0)
		printf("\n No");
	return 0;
}
		
		
			