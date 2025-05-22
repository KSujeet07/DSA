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
    cout<<"Enter roll numbers and marks Of Student :";
    for(int i=0; i<m; i++){
        for(int j=0; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}