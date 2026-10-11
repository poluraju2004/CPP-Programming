#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    int *ptr = arr;
    cout<<arr[0]<<endl;//value of array
    cout<<*arr<<endl;//value of array
    cout<<&arr[0]<<endl;//address of array
    cout<<arr<<endl;//address of array
    cout<<&arr<<endl;//address of array
    cout<<ptr<<endl;//address of pointer
    cout<<&arr<<endl;//address of array
    cout<<&ptr<<endl;//address of pointer
    cout<<*arr<<endl;//value of array
    cout<<*arr+1<<endl;//value of array
    cout<<*(arr+1)<<endl;//value of array
    cout<<*(arr+2)<<endl;//value of array
    cout<<*(arr+3)<<endl;//value of array
    cout<<*(arr+4)<<endl;//value of array
    cout<<endl;
    cout<<*ptr<<endl;//value of pointer
    cout<<*ptr+1<<endl;//value of pointer
    cout<<*(ptr+1)<<endl;//value of pointer
    cout<<*(ptr+2)<<endl;//value of pointer
    cout<<*(ptr+3)<<endl;//value of pointer
    cout<<*(ptr+4)<<endl;//value of pointer
    cout<<*ptr+0<<endl;//value of pointer
    cout<<*(ptr+1)<<endl;//value of pointer
    cout<<*(ptr+2)<<endl;//value of pointer
    cout<<*(ptr+3)<<endl;//value of pointer
    cout<<*(ptr+4)<<endl;//value of pointer
    cout<<endl;

    cout<<&(*ptr)<<endl;//address of the value pointed to by ptr
    cout<<&(*arr)<<endl;//address of the value pointed to by arr
    cout<<*(ptr+1)<<endl;//value of pointer

    cout<<endl;
    cout<<*(*(ptr+1))<<endl;//value of pointer
}