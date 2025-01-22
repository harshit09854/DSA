#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << endl
         << "Inside the function" << endl;
    // Use the 'n' parameter to make the function flexible
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

int main()
{
    int arr[3] = {1, 2, 3}; // Declare and initialize array

    update(arr, 3); // Pass array to function

    cout << "Array in main after function call:" << endl;
    for (int i = 0; i < 3; i++) // Print array in main
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
