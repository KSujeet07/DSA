#include<bits/stdc++.h>
using namespace std;
void sortNeg1st(vector<int> &v){
    int i=0 , j=v.size()-1;
    if(v[i]<0) v[i] = 0;
    if(v[j]>0) v[j] = 1;
    else if(v[i]==1 && v[j]==0){
        v[i]=0;
        v[j]=1;
        i++;j--;
        }
}
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);    
    v.push_back(3);    
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);    
    v.push_back(-7);
    v.push_back(8);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sortNeg1st(v);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
      
return 0;
}