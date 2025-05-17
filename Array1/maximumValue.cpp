#include<iostream>
using namespace std;
int main() {
    int  n;
    cout<<"Enter the number :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :";
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    // int max = arr[0];
    int max = INT16_MIN;
    for(int i = 1; i<=n-1; i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    cout<<max;
        
return 0;
}
    