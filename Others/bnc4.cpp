#include<iostream>
using namespace std;
int main(){
    cout<<"enter two numbers to view prime numbers between these";
    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }     
        if(i==num){
            cout<<num<<endl;
    
        }
       
        
    }
     cout<<"above numbers are prime number between "<<a<<" & "<<b<<endl;
      return 0;
}

