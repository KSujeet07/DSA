#include<iostream>
using namespace std;
int gcd(int a , int b){
    int hcf = 1;
    // for(int i = 1 ; i<=min(a,b);i++){
    //     if(a%i==0 && b%i==0){
    //         hcf = i;
    //     }
    // }

    for(int i=min(a,b) ;i>=1;i--){
            if(a%i==0 && b%i==0){
                hcf = i;
                break;
            }
        }
        

    return hcf;
}
int main() {
    int a , b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;

    cout<<gcd(a,b);
        
return 0;
}