#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cout<<"Enter rows: ";
    cin>>m;
    int n;
    cout<<"Enter columns: ";
    cin>>n;
    int arr[m][n];
    //input
    for(int i=0; i<m; i++){
        for(int j=0; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //Output
    for(int i=0; i<m; i++){
        for(int j=0; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }cout<<endl;

    cout<<"Store Transpose"<<endl;

    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m ; j++){
            t[i][j]=arr[j][i];
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m ; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

}