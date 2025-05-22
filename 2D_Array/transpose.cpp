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

    cout<<"Transpose"<<endl;

    for(int j=0; j<n; j++){
        for(int i=0; i<m ; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}