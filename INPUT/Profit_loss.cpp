#include<iostream>
using namespace std;
int main() {
       int cp,sp ,p ,l ;
       cout<<"Enter cost_Price :";
       cin>>cp;
       cout<<"Enter sell_price :";
       cin>>sp;
       if(sp>cp) {
        cout<<"profit"<<endl;
        cout<<sp-cp<< " is profit ";
    }
       else {cout<<"loss"<<endl;
       cout<<cp-sp<< " is loss ";}
       

return 0;
}
