#include<iostream>
using namespace std;
int main(){

    int i=10, j=20, k;
      //10   //9  //19   //20 //9   //20   //10  //19
    k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<"updated i is: "<<i<<endl;//10>9>10>9>10
     cout<<"updated j is: "<<j<<endl;//20>19>20>19>20
     cout<<"k is: "<<k<<endl;//-20



    return 0;
}