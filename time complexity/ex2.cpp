#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a=a+1;
        }
        cout<<a<<endl;

    }
    return 0;
}/*running time is n squre*/