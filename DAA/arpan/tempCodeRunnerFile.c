#include<stdio.h>


int main()
{
    int n,i,j,k,l,sum;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
    }
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
    }
    return 0;
}
