#include<iostream>
using namespace std;
int main(){
    int n, ld;
    cout<<"Enter a number to check whether it is armstrong or not";
    cin>>n;
    int sum=0;
    while (n>0){
        ld= n%10;
        sum=ld*ld*ld;
        n=n/10;
    }
    if(sum==n){
        cout<<"the number is armstrong";
    }
    else{
        cout<<"Not armstrong ";
    }
 return 0;   
}