#include<iostream>
using namespace std;

void find( int n , int* ptr1 , int* ptr2){
    //for last digit
    *ptr2 = n%10;

    //for first number 
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
    return;

}
int main() {
    int n ;
    cout<<"Enter num :";
    cin>>n;
    
    int firstDigit , lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    find(n , ptr1 , ptr2);

    cout<<"First Digit is : "<<*ptr1 <<endl<<"Last Digit is: "<<*ptr2;
    
        
return 0;
}