#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    int **pp  = &p;
    string str = "Hello World";
    string *ptr = &str;
    cout<<a <<endl;//valueof 
    cout<<*p << endl; //value of pointer
    cout<<&a<<endl;//address of a
    cout<<p<<endl;//address stored in pointer
    cout<<&p<<endl;//address of pointer

    cout<<p<<endl;//value of pointer

    cout<<*pp<<endl;//value of pointer to pointer
    cout<<**pp<<endl;//value of pointer to pointer
    cout<<&pp<<endl;//address of pointer to pointer
    cout<<pp<<endl;//address of pointer to pointer
cout<<endl;
    cout<<str<<endl;//value of string
    cout<<*ptr<<endl;//value of pointer to string
    cout<<&str<<endl;//address of string
    cout<<ptr<<endl;//address of pointer to string

}