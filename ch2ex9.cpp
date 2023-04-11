#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cout<<"Enter numerator of first fraction ";
    cin>>a;
    cout<<"Enter denom of 1st fraction ";
    cin>>b;
    cout<<'\n'<<" Your first fraction"<<a<<'/'<<b<<endl;
    cout<<"Enter numerator of second fraction ";
    cin>>c;
    cout<<"Enter denom of 2nd fraction";
    cin>>d;
    cout<<'\n'<<"Your 2nd fraction"<<c<<'/'<<d<<endl;
    e=a*d+b*c;
    f=b*d;
    cout<<"Equivalent fraction after addition = "<<e<<'/'<<f;
    return 0;
}