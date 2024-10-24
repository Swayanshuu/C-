#include<iostream>
using namespace std;  /*Pascle Triangle*/

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";

        }
        cout<<endl;

   }
   return 0; 
}
