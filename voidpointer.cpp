#include <iostream>
using namespace std;

void increase(void* data,int ptrsize){
    if(ptrsize == sizeof(char)){
        char* ptrchar;
        ptrchar = (char*) data;
        (*ptrchar)++;
        cout<<"data pointer to char:"<<endl;
        cout<<*ptrchar<<endl;
    }
    else if(ptrsize == sizeof(int)){
        int* ptrint;
        ptrint = (int*) data;
        (*ptrint)++;
        cout<<"data pointer to int:"<<endl;
        cout<<*ptrint<<endl;
    }
    else if(ptrsize == sizeof(float)){
        float* ptrfloat;
        ptrfloat = (float*) data;
        (*ptrfloat)++;
        cout<<"data pointer to float:"<<endl;
        cout<<*ptrfloat<<endl;
    }
    else if(ptrsize == sizeof(double)){
        double* ptrdouble;
        ptrdouble = (double*) data;
        (*ptrdouble)++;
        cout<<"data pointer to double:"<<endl;
        cout<<*ptrdouble<<endl;
    }
}

int main(){
    char c = 'A';
    int i = 10;
    float f = 3.14;
    double d = 3.14159;

    increase(&c,sizeof(c));
    increase(&i,sizeof(i));
    increase(&f,sizeof(f));
    increase(&d,sizeof(d));

    return 0;
}