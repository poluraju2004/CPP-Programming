#include <iostream>

using namespace std;

int main(){
    int n;
    int reverse = 0;
    cout<<"Enter a number: ";
    cin>>n;
    int rem = n;

    while(n != 0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }
    if(rem == reverse){
        cout<<rem<<" is a palindromic number.";
    }
    else{
        cout<<rem<<" is not a palindromic number.";
    }

    return 0;
}