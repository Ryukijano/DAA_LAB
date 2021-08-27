#include <iostream>
using namespace std;
int main()
{
    int n,*arr;
    int key;
    cout << "enter the size:";
    cin >> n;
    arr=new int [n];
    cout << "enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key:";
    cin >> key;
    for (int i = 0; i < n-2; i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==key)
                {
                    cout<<"\n the triplet is:"<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                }
            }
        }
    }
    return 0;
}


