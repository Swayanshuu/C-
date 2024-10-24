//finction to add 2 numbers
#include<iostream>
using namespace std;

void print(int num){//dont required //didnt understand
    cout<<num<<endl;
    return;
}

 int add(int num1,int num2){
        int sum=num1+num2;
        return sum;
     }

int main(){
    int a,b;
    
    cout<<"Enter two numbers by giving space between them : ";
    cin>>a>>b;

    cout<<"Addition is : "<<add(a,b)<<endl;
    cout<<"THANK YOU!!!"<<endl;
    
    return 0;
}