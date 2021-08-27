#include<stdio.h>


int main()
{
    	int i,j,k,n,a[3][3];
	printf("Enter the no. of rows of the matrix : ");
	scanf("%d",&n);
	printf("Enter the elements of the matrix : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n\nThe upper triangular matrix is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(i>j)
				printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\n\nThe lower triangular matrix is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(i<j)
				printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}
