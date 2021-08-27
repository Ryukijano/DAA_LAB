#include<iostream>
using namespace std;


int main()
{
    int a,b,c,d,e;
    cout<<"Enter five numbers:";
    cin>>a>>b>>c>>d>>e;
    cout<<"Before swap:";
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<", d = "<<d<<", e = "<<e<<endl;
    swap(a,e);
    swap(b,d);
    swap(c,b);
    cout<<"After swap:";
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<", d = "<<d<<", e = "<<e<<endl;
    return 0;
}
