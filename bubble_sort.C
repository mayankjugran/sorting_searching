#include<stdio.h>
void bubble_sort(int arr[],int n)
{
int i,j,t;
for(i=n-2;i>=0;i--)
 for (j=0;j<=i;j++)
  {
    if(arr[j]>arr[j+1])
      {
        t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
       }
    }
 }
 int main()
 {
    int a[100],n,i;
    printf("\n\t Enter the elements in array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n\t ORIGINAL ARRAY");
    for(i=0;i<n;i++)
     printf("\n\t %d",a[i]);
    bubble_sort(a,n);
    printf("\n\t SORTED ARRAY");
    for(i=0;i<n;i++)
        printf("\n\t %d",a[i]);
    return 0;
 }
