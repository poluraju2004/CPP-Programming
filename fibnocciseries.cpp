#include <iostream>
using namespace std;
int main(){
    int n;
    int a =0;
    int b = 1;
    cout<<"Enter a fib number: ";
    cin>>n;

    for(int i = 0;i<n;i++){
        int c = a+b;
        a = b;
        b = c;
        cout<<a<<" ";
    }
    return 0;
}

/*
while(n !=0 ){
        int c = a+b;
        a = b;
        b = c;
        n--;
        cout<<a<<" ";
    }*/