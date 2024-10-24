#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number to see  its status";
    int n;
    cin>>n;
    int i;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<"  is non prime number"<<endl;
            break;

        }
         else(i==n);
     cout<<n<<"  is prime number"<<endl;
     break;
    }        
       
    
return 0;
}