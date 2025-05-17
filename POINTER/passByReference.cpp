#include<iostream>
using namespace std;
void swap(int* x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main() {
    int a,b;
    // cout<<"Enter 1st number :";
    cin>>a;
    // cout<<"Enter 2nd number :";
    cin>>b;
    
    int* x = &a;
    int* y = &b;

    swap(x,y);
    cout<<a <<" "<<b;    
return 0;
}