#include<iostream>
using namespace std;
int main(){
    int i=1;
    int j=2;
    int k;
    //1   //2  //1  //2    //2  //3    //learned from incbasic.cpp
    k= i + j + i++ + j++ + ++i + ++j; //1+2+2+3+2+3 //(in i++ it shows 1 but acually update to 2 and similar to j)
    cout<<"i is update to: "<<i<<endl;
    cout<<"j is updated to: "<<j<<endl;
    cout<<"value of k is: "<<k<<endl;

    return 0;
}
