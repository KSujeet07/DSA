#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<" Enter number of students: " ;
    cin>>n;
    int marks[n] ;
    cout<<"Enter the marks : ";
    //input marks
    for(int i=1 ; i<=n ; i++){
        cin>>marks[i];
    }
    
    for(int i = 1 ; i<=n ; i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}    
