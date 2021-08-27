#include<iostream>
using namespace std;
void uni(int a[],int b[],int f1,int f2)
{
    int *x,c=f1+f2,m=0;

    x=new int[c];
    for (int i=0 ; i<f1; i++)
    {
        x[i]=a[i];
    } 
     for(int j=f1; j<c+1 ; j++)
     {
        x[j]=b[m];
        m++;
     }
   cout<<"\n the union of arrays is \t";
   for(int i=0; i<c; i++)
   {
       cout<<" "<<x[i];
   }

}
void intersect(int a[],int b[],int f1,int f2)
{
    int x=0,*u;
    u =new int [f1+f2];
    for(int i =0; i<f1;i++)
    {
        for(int j=0; j<f2;j++) 
        {
            if(a[i]==b[j])
            {
                u[x]=a[i];
                x++;break;   
            }
            

        }
    }
    cout<<"\n the intersection of arrays is \t";
   for(int i=0; u[i]!=0 ; i++)
   {
       cout<<" "<<u[i];
   }

}

int main()
{
    int *e1,*e2,flag,n,x;
    cout<<"\n enter the size of the array 1\t";
    cin>>n;
    cout<<"\n enter the size of the array 2\t";
    cin>>x;
    e1=new int[n];
    e2=new int[x];
    cout<<"\n enter the array 1";
    for(int i =0; i<n ; i++)
    {
        cin>>e1[i];
    }
    cout<<"\n enter the array 2";
    for(int i =0; i<x ; i++)
    {
        cin>>e2[i];
    }
    uni(e1,e2,n,x);
    intersect(e1,e2,n,x);
}





