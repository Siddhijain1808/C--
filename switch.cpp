#include<iostream>
using namespace std;
int main()
{
   /* int num;
    cout<<"Enter a num ";
    cin>>num;
    switch(num){
        case 1: cout<<"hello";
        break;
        case 2: cout<<"hola";
        break;
        case 3: cout<<"Salut";
        break;
        case 4: cout<<"ciao";
        break;
        default: cout<<"num entered wrong";

    }*/
    
    int a,b;
    cout<<"Enter two numbers";
    cin>>a;
    cin>>b;
    char op;
    cout<<"Enter any operator";
    cin>>op;
        switch(op){
        case '+' : cout <<a+b;
            break;
        case '-' : cout <<a-b;
            break; 
        case '*' : cout <<a*b;
            break; 
        default: cout<<"wrong input";
            break;
    }
    return 0;
}
