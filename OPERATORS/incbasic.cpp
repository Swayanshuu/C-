#include<iostream>
using namespace std;
int main(){
   
    int a =1;
   
      //a=1 //a=2+1=12 //COZ AFTER A++ IN UPDATE TO 2....SP AFTER  THAT IT AGAIN UPDATE TO 3...
    a=a++ + ++a;
    cout<<"'a' is "<<a<<endl;
    

    return 0;
}