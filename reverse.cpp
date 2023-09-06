#include<iostream>
using namespace std;
int main(){
    int i,n;
    int rev=0, ld;
    cout<<"Enter a number";
    cin>>n;
    while(n>0){
        ld=n%10;
        rev= rev*10 +ld;
        n=n/10;
    }cout<<rev<<endl;
    
    return 0; 
}