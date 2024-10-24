#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"enter a character:";
    cin>>button;

    if(button=='a'){
        cout<<"namaste"<<endl;
    }
    else if(button=='b'){
        cout<<"hello"<<endl;
    }
    else if(button=='c'){
        cout<<"holla"<<endl;
    }
    else if(button!='a','b','c'){
        cout<<"sorry i am still learning"<<endl;
    }
        
    return 0;
}