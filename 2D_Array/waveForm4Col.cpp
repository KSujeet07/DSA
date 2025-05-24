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

    //Wave Form ColumnWise

    for(int j=0; j<n; j++){
        if(j%2!=0){
            for(int i=m-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
        }
        else {
            for(int i=0; i<m; i++){
                cout<<a[i][j]<<" ";
            }
        }
    }


}