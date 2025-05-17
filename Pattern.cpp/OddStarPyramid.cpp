#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter rows:";
    cin>>n;

    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=n-i ; j++){
            cout<<" ";
        }
        //odd number star triangle tha isliye k<=n se replace krke k<=2*i-1; ho gya 
        for(int k=1 ; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
        
return 0;
}