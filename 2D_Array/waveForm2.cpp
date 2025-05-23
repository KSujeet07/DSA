#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m ;
    cout<<"Enter rows of   matrix : ";
    cin>>m;
    int n;
    cout<<"Enter cols of   matrix : ";
    cin>>n;

    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    // // Wave Print 2
    // for(int i=0; i<m; i++){
    //     if(i%2==0){
    //         for(int j=n-1; j>=0; j--){
    //             cout<<a[i][j]<<" ";
    //         }
    //     }
    //     else {
    //         for(int j=0 ; j<n; j++){
    //             cout<<a[i][j]<<" ";
    //         }
    //     }
    // }

    //optimised
    for(int i=0; i<m; i++){
        if(i%2!=0){
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
        }
        else {
            for(int j=n-1 ; j>=0; j--){
                cout<<a[i][j]<<" ";
            }
        }
    }


}