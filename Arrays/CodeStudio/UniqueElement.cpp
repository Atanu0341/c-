#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{

    int even[7] = {5, 2, 5, 2, 3, 4, 4};

    int uniqueElement = findUnique(even, 7);

    printArray(even, 7);

    cout << "Unique element in the array: " << uniqueElement << endl;
    
    return 0;
}

// Question link
// https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0