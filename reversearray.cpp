#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[n];
    cout<<"Enter array size: ";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Before reverse: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After reverse: ";
    for(int i= n-1;i>=0;i--){
        cout<<arr[i]<<" " ;
    }
}