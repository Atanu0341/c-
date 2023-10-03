#include <iostream>
using namespace std;

/*
int main(){

    int p;
    int r;
    int t;

    int simpleInterest;

    cout<<"Enter the principal amount : ";
    cin>>p;
    cout<<"Enter the rate of interest : ";
    cin>>r;
    cout<<"Enter the time : ";
    cin>>t;

    simpleInterest = (p*r*t)/100;

    cout<<"Simple interest is "<<simpleInterest<<endl;

    return 0;
}

*/

// or by using function

int calculate(int p, int r, int t)
{
    return (p * r * t) / 100;
}

int main()
{

    int p, r, t;

    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time: ";
    cin >> t;

    int simpleInterest = calculate(p, r, t);
    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}