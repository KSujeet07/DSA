#include<bits/stdc++.h>
using namespace std;
void display(vector <int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i , int j , vector<int> &v1){
    while(i<=j){
        int temp = v1[i];
        v1[i]= v1[j];
        v1[j]= temp;
        i++;
        j--;
    }
    return;

}
void reverse(vector<int> &v1){
    int i=0;
    int j=v1.size()-1;
    while(i<=j){
        int temp = v1[i];
        v1[i]= v1[j];
        v1[j]= temp;
        i++;
        j--;
    }
    return;

}
int main() {
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(3);    
    v1.push_back(9);    
    v1.push_back(7);
    v1.push_back(6);
    v1.push_back(5);

    display(v1);

    //reverse
    // int i = 0;
    // int j = v1.size()-1;
    // while(i<=j){
    //     //swap v[i] and v[j]
    //     int temp = v1[i];
    //     v1[i]= v1[j];
    //     v1[j]= temp;
    //     i++;
    //     j--;
    // }

    // for(int i=0 , j = v1.size()-1 ; i<=j ; i++ , j--){
    //     int temp = v1[i];
    //     v1[i]= v1[j];
    //     v1[j]= temp;
    // }

    // reverse(v1.begin(),v1.end());

    reversePart(0,4,v1);
    // reverse(v1);
    display(v1);

}