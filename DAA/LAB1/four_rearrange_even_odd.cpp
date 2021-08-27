#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrange_even_odd(int a[], int n)
{
    int i = 0;
    int j = n - 1;
    int temp;
    while(i < j)
    {
        while(a[i] % 2 == 0 && i < j)
        {
            i++;
        }
        while(a[j] % 2 == 1 && i < j)
        {
            j--;
        }
        if(i < j)
        {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
    }

}

int main()
{
    int a[] = {1, 2, 3, 4, 2, 6, 3, 10, 7, 8};
    int n = sizeof(a) / sizeof(int);
    rearrange_even_odd(a, n);
    cout<<"The rerranged array is:";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}