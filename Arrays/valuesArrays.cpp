//  Initialization of a normal array with one default value in C++

#include <iostream>
using namespace std;

int main()
{
    int a[10] = {0};
    int b[10] = {5};
    int c[10];

    cout<<"Elements of array a: ";
    for(int i = 0; i<10; i++) {
        cout<< a[i] <<" ";
    }
    cout<<"\n";

    cout<<"Elements of array b: ";
    for(int i = 0; i<10; i++) {
        cout<< b[i] <<" ";
    }
    cout<<"\n";

    cout<<"Elements of array c: ";
    for(int i = 0; i<10; i++) {
        c[i] = 5;
        cout<< c[i] <<" ";

    }


    cout<<"\n";

    return 0;
}