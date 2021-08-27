#include <iostream>

using namespace std;

int main()
{
    int n , i, product=1;
    int a[n];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements into the array: \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        product*=a[i];
    }
   
   for(i=0;i<n;i++)
   {
       product/=a[i];
   }
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}