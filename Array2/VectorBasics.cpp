#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;

    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    v.push_back(1);

    // if you want to update / access 
    v[0]=88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";
    
        
return 0;
}