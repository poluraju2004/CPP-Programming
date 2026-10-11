#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Before swap: " <<a << " " << b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"After swap " << a << " " << b;
}