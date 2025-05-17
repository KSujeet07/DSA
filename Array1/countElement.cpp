#include<iostream>
using namespace std;
int main() {
    int  x,n;
    cout<<"Enter the number :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :";
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    cout<<"Enter number :";
    cin>>x;
    int count = 0;
    for(int i=0 ; i<=n-1; i++)
    {
        if(arr[i]>x) count++;
    }
    cout<<count;

        
return 0;
}