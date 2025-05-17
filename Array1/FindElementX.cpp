#include<iostream>
using namespace std;
int main() {
    int x, n;
    cout<<"Enter the number :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :";
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value X :";
    cin>>x;
    bool flag = false;
    for(int i = 0; i<=n-1 ; i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"element found";
    else cout<<"404 element not found";
        
return 0;
}