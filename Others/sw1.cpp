#include<iostream>
using namespace std;
int main(){
     char button;
     cout<<"enter a character: ";
     cin>> button;

     switch (button){
     case 'a':
        cout<<"namaste"<<endl;
        break;

        
    case 'b':
        cout<<"heloo"<<endl;
        break;

        
     case 'c':
        cout<<"holla"<<endl;
        break;

        
        

    default:
    cout<<"i am still learning more!!!!"<<endl;
        break;   
 
     }

    return 0;
}