#include <iostream>
using namespace std;

// Function to generate and print Fibonacci series up to n terms
void fiboSeries(int n)
{
    int a = 0;
    int b = 1;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        int nextNumber = a + b;
        a = b;
        b = nextNumber;
    }
}

int main()
{
    int n;

    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;

    fiboSeries(n);

    return 0;
}
