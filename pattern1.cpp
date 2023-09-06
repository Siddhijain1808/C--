#include<iostream>
using namespace std;
int main()
{
   /* int i,j;
    int n,m;
    cout<<"Enter the number of rows and column";
    cin>>n>>m;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cout<<"  *  ";
        }cout<<endl;
    }
    return 0;*/


    //pattern 2 (Hollow reactangle parttern)
   /* int i, j;
    int n, m;
    cout<<"Enter the number of rows and column ";
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<" * ";
            }
            else {
                cout<<"  ";
            }
    }cout<<endl;
    return 0; */



    // pattern 3 (half pyramid)
   /* int i, j;
    int n;
    cout<< "Enter the value of n";
    cin>>n;
    for(i=n;i>=1;i--){
        for (j=1;j<=i;j++){
            cout<<"*";
        } cout<<endl;
    }
    return 0;*/



    //pattern 4 (half pyramid after 180 degrre rotation)
    /*int i, j;
    int n;
    cout<<"Enter n ";
    cin>>n;
    for( i=1 ; i<=n ; i++ ){
        for (j=1;j<=n; j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<< "*";
            }
        }
        cout<<endl;
    }
}*/


  // pattern 5 (half pyramid using numbers)
  /*int i, j;
  int n;
  cin>>n;
  for(i=1; i<=n;i++){
    for(j=1;j<=i; j++){
        cout<<i;
    }cout<<endl;
  }*/



  //pattern 6 Floyds triangle
  int n, i,j, count=1;
  cin>>n;
  for(i=1; i<=n;i++){
    for(j=1; j<=i; j++){
        cout<<count<<" ";
        count++;
    }cout<<endl;
  }
}