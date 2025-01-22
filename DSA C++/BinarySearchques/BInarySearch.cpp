#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[6] = {12, 13, 45, 67, 89};
    int arr2[5] = {1, 2, 6, 7, 5};

    int index = BinarySearch(arr, 6, 89);
    cout << "INdex of 89 is" << index << endl;
    return 0;
}


// complexity  = (log)
