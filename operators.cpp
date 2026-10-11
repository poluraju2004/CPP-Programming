#include <iostream>
using namespace std;

int main(){
    int a,b;
    char ch ;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Enter operator (+,-,*,/):";
    cin>>ch;

    switch(ch){
        case '+' :
            cout<<"A+B = " << a+b;
        break;
         case '-' :
            cout<<"A-B = " << a-b;
        break;
         case '*' :
            cout<<"A*B = " << a*b;
        break;
         case '/' :
         if(b!=0)
            cout<<"A/B = " << a/b;
        else
        cout<<"can't divisibe by zero: ";
        break;
        default:
        cout<<"Invalid Operatore: ";
    }
}