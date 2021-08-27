#include<stdio.h>


int main()
{
    int m,n,i,j,k,l,sum=0;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d",&m);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("The sum of main diagonal elements of the matrix is: %d\n",sum);
    sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==m-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("The sum of opposite diagonal elements of the matrix is: %d\n",sum);
    return 0;
}
