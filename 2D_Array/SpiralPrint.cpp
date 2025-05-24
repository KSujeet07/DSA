#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m ;
    cout<<"Enter rows of   matrix : ";
    cin>>m;
    int n;
    cout<<"Enter cols of   matrix : ";
    cin>>n;

    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    //SPIRAL
    int minr =0 , minc =0 ;
    int maxr = m-1 , maxc = n-1;
    int tne = m*n;
    int count = 0;

    while(minr<=maxr && minc<= maxc){
        //Right
        for(int j=minc; j<=maxc && count<tne; j++){
            cout<<a[minr][j]<<" ";
            count++;
        }
        minr++;
        //DOWN
        for(int i=minr; i<=maxr && count<tne; i++){
            cout<<a[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //LEFT
        for(int j=maxc; j>=minc && count<tne; j--){
            cout<<a[maxr][j]<<" ";
            count++;
        }
        maxr--;
        //UP
        for(int i=maxr; i>=minr && count<tne; i--){
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;

    }


}

//LEET CODE 54
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     int minr =0 , minc =0 ;
//     int maxr = m-1 , maxc = n-1;
//     int tne = m*n;
//     int count = 0;
//     vector<int>v;

//     while(minr<=maxr && minc<= maxc){
//         //Right
//         for(int j=minc; j<=maxc && count<tne; j++){
//             v.push_back(matrix[minr][j]);
//             count++;
//         }
//         minr++;
//         //DOWN
//         for(int i=minr; i<=maxr && count<tne; i++){
//             v.push_back(matrix[i][maxc]);
//             count++;
//         }
//         maxc--;
//         //LEFT
//         for(int j=maxc; j>=minc && count<tne; j--){
//             cout<<matrix[maxr][j]<<" ";
//             v.push_back(matrix[maxr][j]);
//             count++;
//         }
//         maxr--;
//         //UP
//         for(int i=maxr; i>=minr && count<tne; i--){
//             v.push_back(matrix[i][minc]);
//             count++;
//         }
//         minc++;

//     }
//     return v;

//     }
// };