#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=1; i<=n; i++){
        n=n*i;
    } cout<<"the factorial of the number is "<<n;
return 0;
}