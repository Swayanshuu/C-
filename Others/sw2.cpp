#include<iostream>
using namespace std;
int main(){

  
    

    float n1,n2;
    cout<<"enter two numbers: ";
    cin>> n1 >> n2;

    char op;
    cout<<"enter your operator: ";
    cin>> op;

    switch(op)
    {
     case '+':
        cout<<"sum is = "<<n1 + n2<<endl;
        break;

     case '-':
        cout<<"difference = "<<n1 - n2<<endl;
        break;

     case '*':
        cout<<"multiplication is = "<<n1 * n2<<endl;
        break;

     case '/':
        cout<<"division is = "<<n1 / n2<<endl;
        break;
    default:
    cout<<" SORRY! out of syllbus  :( !!!! ";
    break;

    }


  



    return 0;
}
