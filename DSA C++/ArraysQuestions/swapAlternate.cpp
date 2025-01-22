#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapArray(int arr[], int size)
{

    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[6] = {1, 3, 6, 5, 7, 9};
    int arr2[5] = {2,3, 4, 5, 6};
    int size = sizeof(arr2)/sizeof(int);

    swapArray(arr, 6);
    printArray(arr, 6);

    swapArray(arr2, 5);
    printArray(arr2, 5);



    return 0;
}