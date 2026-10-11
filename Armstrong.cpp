#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    int temp = n;
    while(n>0){
        int digit = n%10;
        sum = sum + (digit*digit*digit);
        n = n/10;
    }
    if(sum == temp){
        cout<<temp<<" is an Armstrong number.";
    }
    else{
        cout<<temp<<" is not an Armstrong number.";
    }
}