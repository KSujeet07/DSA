#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"No. of lines:";
    cin>>n;

    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int a = i;
            int b = j;
            if(a>n) a = 2*n-i;
            if(b>n) b = 2*n-j;
            // //if you want this 
            // 111111111
            // 122222221
            // 123333321
            // 123444321
            // 123454321
            // 123444321
            // 123333321
            // 122222221
            // 111111111
            // cout<<min(a,b);

            //for reverse
            int x = min(a,b);
            cout<<n-x+1;
            
        }   
        cout<<endl;
    }
        
return 0;
}