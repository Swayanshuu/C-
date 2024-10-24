#include<iostream>
using namespace std;
int main(){
     int i=1, j=2, k=3;
           //1     //2   //3
     int m = i-- - j-- - k--;
       //value of m is from above calculation(line 5) i.e 1-2-3=-4
       //then  value of i j k updated 
     cout<<"updated i is: "<<i<<endl;//0
     cout<<"updated j is: "<<j<<endl;//1
     cout<<"updated k is: "<<k<<endl;//2
     cout<<"m is: "<<m<<endl;

    return 0;
}