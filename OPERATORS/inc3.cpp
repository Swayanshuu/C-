#include<iostream>
using namespace std;
int main(){

    int i=0;
      //0 but upadted to 1
      //insta decrease from 1 to 0
      //shows 0 but updated to 1
      //insta getting 0 from 1
      //ans is 0
    i= i++ - --i + ++i - i--; //answer is fromthisresults....(for beter understandings see inc4.cpp)
      //0   //0   //0    //0
    cout<<i<<endl;


    return 0;
}