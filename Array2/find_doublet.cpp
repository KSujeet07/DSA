#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter target :";
    cin>>n;
    vector<int> v;
    int x;
    cout<<"Enter array size :";
    cin>>x;

    cout<<"Enetr array elemnts : ";
    for(int i=0; i<=n ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0; i<=v.size()-2 ; i++){
        for(int j=i+1; j<=v.size()-1; j++){
            if(v[i]+v[j]==n){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
        
return 0;
}