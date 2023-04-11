#include<iostream>
using namespace std;
int main()
{
    int pounds;
    int shellings;
    char penace;
    cout<<"Enter pounds ";
    cin>>pounds;
    cout<<"Enter shellings ";
    cin>>shellings;
    cout<<"Enter penace ";
    cin>>penace;
    int temp = pounds*240+shellings*12+penace;
    int dp=temp/100;
    cout<<"Decimal pounds = "<<dp;
    return 0;
}