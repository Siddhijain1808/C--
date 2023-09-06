#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter the number till you want to print the sum";
    cin>>n;
    for(int i=0;i<=n; i++)
    {
        sum=sum+i;
       
    }
     cout<<sum;
    return 0;
}