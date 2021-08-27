#include <iostream>
using namespace std;

int main()
{
    int n,*a,missing,y;
    cout<<"Enter the size of the array";
    cin>>n;
    a=new int[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    
    for(int i=0;i<n;i++)
    {
        missing=a[i];
        if((missing+1)!=a[i+1])
        {
            y=missing+1;
            break;
        }
    }
    cout<<"The missing number is "<<y;
    return 0;
}
