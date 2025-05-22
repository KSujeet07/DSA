#include<bits/stdc++.h>
using namespace std;
int main()
{

int m;
    cout<<"Enter rows/columns: ";
    cin>>m;
    int arr[m][m];
    //input
    for(int i=0; i<m; i++){
        for(int j=0; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //Transpose
    for(int i=0; i<m ; i++){
        for(int j=i+1 ; j<m ; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<endl;

    //reverse each row

       for(int k=0 ; k<m; k++){ // reversing each row
        int i=0;
        int j = m-1;
        while(i<j){     // swapping k,i and k,j;
            int temp = arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;

        }
       }

    for(int i=0; i<m; i++){
        for(int j=0; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

