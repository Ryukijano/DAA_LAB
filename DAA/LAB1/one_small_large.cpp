#include <iostream>

using namespace std;


int main()
{
    int n,i,large,small;
    cout<<"Enter the size of the array";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index "<<i<<":";
        cin >> a[i];
        large=small=a[0];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];

        }
        if(a[i]<small)
        {
            small=a[i];

        }

    }
    cout<<"The smalllest element is "<<small<<endl;
    cout<<"The largest element is "<<large<<endl;
    return 0;
}
