#include <iostream>
using namespace std;

/*
int main(){

    int a, b ;

    cout<<"Enter first number : ";
    cin>>a;

    cout<<"Enter second number : ";
    cin>>b;

    if (a>b)
    {
        cout<<a<<" is the largest number";
    }
    else{
        cout<<b<<" is the largest number";
    }
    return 0;
}
*/

// using function

int bigger(int a, int b)
{
    if (a > b)
    {
        cout << a << " is the largest number";
    }
    else
    {
        cout << b << " is the largest number";
    }
}

int main()
{

    int a, b;

    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    bigger(a, b);

    return 0;
}