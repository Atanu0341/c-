#include <iostream>
using namespace std;
/*
int main()
{

    int sum = 0;
    int size;
    cout << "Enter the number of elements : ";
    cin >> size; // Accepting array size

    int arr[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // Accepting the values
    }

    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i]; //Calculating sum
    }

    cout<<"Sum of the element in an array list : "<<sum<<endl;


    return 0;
}
*/

// using Function

int sumArray(int arr[], int size)
{
    int sum = 0;
    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // Accepting the values
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i]; // Calculating sum
    }

    return sum; // Return the calculated sum
}

int main()
{

    int sum = 0;
    int size;
    cout << "Enter the number of elements : ";
    cin >> size; // Accepting array size

    int arr[100];

    cout << "Sum of the element in an array list : " << sumArray(arr, size) << endl;

    return 0;
}