#include<iostream>
using namespace std;
int main(){

/*   int n;
    cout<<"Enter num to check whether it is prime or not ";
    cin>>n;
    for (int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            break;
        }
        cout<<"prime";
    }  */ 

    int a,b;
    cout<<"Enter the number till you want prime numbers";
    cin>>a>>b;
    for( int num=a; num<=b; num++){
        int i;  
        for ( i=2; i<num; i++){
            if(num%i==0){
                break;
                }
        if(i==num){
            cout<<num<<endl;
        }
        }
    }
    return 0;  
}