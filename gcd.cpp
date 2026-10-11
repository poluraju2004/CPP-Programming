#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    while(b!=0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    cout<<"GCD = " << a;
}

/*#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD = " << a << endl;

    return 0;
} */