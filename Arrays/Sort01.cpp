#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortOne(int arr[], int n)
{

    int left = 0, right = n - 1;

    // int step = 0;

    while (left < right)
    {
        // cout << "Step " << step++ << endl;
        // printArray(arr, n);
        // cout << endl;

        while (arr[left] == 0)
        {
            left++;
        }

        while (arr[right] == 1)
        {
            right--;
        }

        // now arr[left]==1 and arr[right]==0

        if (arr[left] == 1 && arr[right] == 0 && left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{

    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}