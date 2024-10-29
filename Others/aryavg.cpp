#include<iostream>
using namespace std;

float avg(int length , int array[]){

    int sum=0;
    for(int i=0;i<length;i++){
        sum+=array[i];
    }
    return sum / (float) length;
}

int main(){

    int n;
    cout<<"Enter the numbers of inputs you want to enter: ";
    cin>>n;
    int ary[n];

    for(int i=0;i<n;i++){
        cout<<"Enter input: ";
        cin>>ary[i];
    }

    cout<<avg(n,ary)<<endl;

return 0;




}