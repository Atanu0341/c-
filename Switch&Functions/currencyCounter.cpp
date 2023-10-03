#include <iostream>
using namespace std;

int main()
{
    int amount;
    int n1, n2, n5, n10, n20, n50, n100, n200, n500, n2000;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = n2000 = 0;

    // Asking the user to enter the total amount
    cout << "Please Enter Your total Amount to find the notes: ";
    cin >> amount;

    // Checking if the amount is greater than or equal to 2000
    switch (amount >= 2000)
    {
    case 1:
        // Calculating the number of 2000 rupee notes and updating the amount
        n2000 = amount / 2000;
        amount -= n2000 * 2000;
        break;
    }
    // Similar logic is applied for other denominations
    switch (amount >= 500)
    {
    case 1:
        n500 = amount / 500;
        amount -= n500 * 500;
        break;
    }
    switch (amount >= 200)
    {
    case 1:
        n200 = amount / 200;
        amount -= n200 * 200;
        break;
    }
    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount -= n100 * 100;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount -= n50 * 50;
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        n20 = amount / 20;
        amount -= n20 * 20;
        break;
    }
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount -= n10 * 10;
        break;
    }
    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount -= n5 * 5;
        break;
    }
    switch (amount >= 2)
    {
    case 1:
        n2 = amount / 2;
        amount -= n2 * 2;
        break;
    }
    switch (amount >= 1)
    {
    case 1:
        n1 = amount / 1;
        amount -= n1 * 1;
        break;
    }

    // Output the number of notes of each denomination
    cout << "2000 = " << n2000 << endl;
    cout << "500 = " << n500 << endl;
    cout << "200 = " << n200 << endl;
    cout << "100 = " << n100 << endl;
    cout << "50 = " << n50 << endl;
    cout << "20 = " << n20 << endl;
    cout << "10 = " << n10 << endl;
    cout << "5 = " << n5 << endl;
    cout << "2 = " << n2 << endl;
    cout << "1 = " << n1 << endl;
}