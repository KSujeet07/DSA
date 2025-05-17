#include<iostream>
using namespace std;
int main() {
       int x;
       cin>>x;
       
       switch (x)
       {
       case 1:
        cout<<"January"<<endl;
        cout<<"Days-"<<31;
        break;
        case 2:
        cout<<"Feburary"<<endl;
        cout<<"Days-"<<28;
        break;
        case 3:
        cout<<"March"<<endl;
        cout<<"Days-"<<31;
        break;
        case 4:
        cout<<"April"<<endl;
        cout<<"Days-"<<30;
        break;
        case 5:
        cout<<"May"<<endl;
        cout<<"Days-"<<31;
        break;
        case 6:
        cout<<"June"<<endl;
        cout<<"Days-"<<30;
        break;
        case 7:
        cout<<"July"<<endl;
        cout<<"Days-"<<31;
        break;
        case 8:
        cout<<"August"<<endl;
        cout<<"Days-"<<31;
        break;
        case 9:
        cout<<"September"<<endl;
        cout<<"Days-"<<30;
        break;
        case 10:
        cout<<"October"<<endl;
        cout<<"Days-"<<31;
        break;
        case 11:
        cout<<"November"<<endl;
        cout<<"Days-"<<30;
        break;
        case 12:
        cout<<"December"<<endl;
        cout<<"Days-"<<31;
        break;
       default:
        cout<<"invalid";
        break;
       }
        
return 0;
}