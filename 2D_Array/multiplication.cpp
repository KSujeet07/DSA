#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m ;
    cout<<"Enter rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter cols of 1st matrix : ";
    cin>>n;
    int p;
    cout<<"Enter rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter cols of 2nd matrix : ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter elements of 1st matrix :"<<endl;
        for(int i=0; i<=m-1; i++){
            for(int j=0; j<=n-1; j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter elements of 2nd matrix :"<<endl;
        for(int i=0; i<=p-1; i++){
            for(int j=0; j<=q-1; j++){
                cin>>b[i][j];
            }
        }
        //resultant

        int res[m][q];
        for(int i=0; i<=m-1; i++){
            for(int j=0; j<=q-1; j++){
                res[i][j]=0;
                // res[i][j] = a[i][0]*b[0][j]+a[i][1]*b[1][j]+........
                for(int k=0; k<=p-1; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }

            }
        }
        cout<<endl;

        //print

        for(int i=0; i<=m-1; i++){
            for(int j=0; j<=q-1; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    else{ // n!=p
        cout<<"The matrices cannot be multiplied.";
    }

}