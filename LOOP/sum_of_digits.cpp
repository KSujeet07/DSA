#include<iostream>
using namespace std;
int main() {
       int n;
       cout<<"Enter the numbers:"<<endl;
       cin>>n;
       int sum=0;
       int lastdigit = 0;
       while(n>0){
        lastdigit = n%10;
        sum+=lastdigit;
        n/=10;
        
       }
       cout<<sum;
        
        
return 0;
}