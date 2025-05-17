#include<iostream>
using namespace std;
int main() {
    int x = 4;
    int* p = &x;
    cout<<*p<<endl;
    ++(*p);
    cout<<*p<<endl;

        
return 0;
}