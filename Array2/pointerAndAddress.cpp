#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    // int* ptr = arr[0] and int* ptr = &arr; invalid
    // int* ptr = arr; 
    int* ptr = &arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<=size-1 ; i++){
        cout<<ptr[i]<<" "; // cout<<i[ptr]; cout<<i[arr]; are all valid
    }
    cout<<endl;
    *ptr = 8; // ptr[0] = 8;
    ptr++;
    *ptr = 9;
    ptr--;
    for(int i=0; i<=size-1 ; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;

        
return 0;
}   