#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :";
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    int a=0;
    for(int i=0 ; i<=n-1; i++){
        a=+arr[i];

    }
    cout<<"Sum Of all Elements :"<<a;
        
return 0;
}