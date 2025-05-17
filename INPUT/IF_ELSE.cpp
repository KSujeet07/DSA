#include<iostream>
using namespace std;
int main() {
       int x;
       cout<<"Enter an integr number :";
       cin>>x;
       if(x>0) cout<<x <<" is an absolute number"<<endl;
       else cout<<x <<" of " <<-(x) <<" is an absolute number";
    return 0;   
}
