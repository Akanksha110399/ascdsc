#include<stdio.h>
#include<stdlib.h>
int main()
{
		int *a,i,n,j,temp;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("space not allocated");
		exit(0);
	}
	printf("Enter dynamic array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)//no.of steps to be performed is n-1 in bubble sort
	{
		for(j=0;j<n-i-1;j++)//no.of comparisons
	   {
		if(a[j]>a[j+1])//swapping
		{
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
        }
       }
	}
	printf("sorted array is\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
    }
	printf("The first half array is\n");
	for(i=0;i<n/2;i++)
	{
	printf("%d\n",a[i]);
    }
    printf("The 2nd half");
	for(i=n-1;i>=n/2;i--)
	{
		printf("%d\n",a[i]);
    }
	return 0;
}
