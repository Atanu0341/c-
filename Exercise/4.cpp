#include <iostream>
using namespace std;

// using if else statement

/*
int main()
{

    int a, b;

    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    char op;
    cout << "Enter the Operation you want to perform (+, -, *, /) : ";
    cin >> op;

    if (op == '+')
    {
        int sum = a + b;
        cout << "Sum is " << sum << endl;
    }
    else if (op == '-')
    {
        int sub = a - b;
        cout << "Difference is " << sub << endl;
    }
    else if (op == '*')
    {
        int product = a * b;
        cout << "Product is " << product << endl;
    }
    else if (op == '/')
    {
        int division = a / b;
        cout << "Division is " << division << endl;
    }
    else
    {
        cout << "Enter a valid operators" << endl;
    }

    return 0;
}
*/

// using function

int calculate(int a, int b, char op){
    if (op == '+')
    {
        int sum = a + b;
        cout << "Sum is " << sum << endl;
    }
    else if (op == '-')
    {
        int sub = a - b;
        cout << "Difference is " << sub << endl;
    }
    else if (op == '*')
    {
        int product = a * b;
        cout << "Product is " << product << endl;
    }
    else if (op == '/')
    {
        int division = a / b;
        cout << "Division is " << division << endl;
    }
    else
    {
        cout << "Enter a valid operators" << endl;
    }

}

int main()
{

    int a, b;

    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    char op;
    cout << "Enter the Operation you want to perform (+, -, *, /) : ";
    cin >> op;

    calculate(a,b,op);
    

    return 0;
}