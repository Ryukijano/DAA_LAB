#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int step=0;
void I_sort(int a[],int n)
{
    int temp;
    for (int i=1; i<n; i++)
    {
        step++;
        int j=i-1;
        temp =a[i];
        while(j>=0&&a[j]>=temp)
        {
            a[j+1] = a[j];
            j= j-1;
            step++;
        }
        a[j+1] = temp;
    
    }
}

int B_search(int a[],int n, int x)
{
    int mid,flag=0;
    if (n%2==0)
    mid=(n/2)-1;
    else
    mid=n/2;
    I_sort(a,n);
    int temp =a[mid];
    if(x>a[mid])
    {
        step++;
        for (int j=mid; j<n&&flag==0; j++)
        {
            step++;
            if (a[j]==x)
            flag=j;  
        }
    }
    else if(x<a[mid])
    {
        step++;
        for (int j=0; j<mid&&flag==0; j++)
        {
            step++;
            if (a[j]==x)
            flag=j;  
        }
    }
    else if (x==a[mid])
    flag=mid;

    return flag;
} 

void display(int x[], int n)
{
    if(n>20)
    {
    for(int i=0; i<20; i++)
    {
        cout<< x[i]<<"\n";
    }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cout<< x[i]<<"\n";
        }

    }
}


int main()
{
    int *x =NULL ,steps=0, n, ele,flag;
    cout<<"\n enter the size of the array ";
    cin>>n;
    x=new int[n];
    cout<<"\n enter the array\n";
    for(int k = 0; k<n ; k++)
    {
        cin>>x[k];
    }
    cout<<"\n enter the element to be searched";
    cin>>ele;
    flag = B_search(x,n,ele);
    cout<<"\n Displaying the array\n";
    display(x,n);
    if (flag!=0)
    cout<<"\nelement found at position :"<<flag+1;
    else
    cout<<"element not found in array";
    cout<<"\n total number of steps taken for whole program (sorting and searching)"<<step;
    return 0;
}