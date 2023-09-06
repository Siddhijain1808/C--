#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number till you want to print the sum";
    cin>>n;
    for(int i=0;i<n; i++)
    {
        i=i+n;
        cout<<i;
    }
    return 0;
}