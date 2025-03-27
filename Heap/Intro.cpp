#include <iostream>
using namespace std;

class heap
{
public:
  int arr[100];
  int size = 0;

  heap()
  {
    arr[0] = -1;
    size = 0;
  }
  void insert(int val)
  {
    size = size + 1;
    arr[size] = val;
    int i = size;
    while (i > 1)
    {
      int parent = i / 2;
      if (arr[parent] < arr[i])
      {
        swap(arr[parent], arr[i]);
        i = parent;
      }
      else
      {
        return;
      }
    }
  }

  void deletefromHeap()
  {
    if (size == 0)
    {
      cout << "Heap is empty" << endl;
      return;
    }
    arr[1] = arr[size];
    size = size - 1;
    int i = 1;

    while (i < size)
    {
      int leftindex = 2 * i;
      int rightindex = 2 * i + 1;
      if (leftindex <= size && rightindex <= size)
      {
        if (arr[i] < arr[leftindex] && arr[i] < arr[rightindex])
        {
          if (arr[leftindex] > arr[rightindex])
          {
            swap(arr[i], arr[leftindex]);
            i = leftindex;
          }
          else
          {
            swap(arr[i], arr[rightindex]);
            i = rightindex;
          }
        }
        else if (arr[i] < arr[leftindex])
        {
          swap(arr[i], arr[leftindex]);
          i = leftindex;
        }
        else if (arr[i] < arr[rightindex])
        {
          swap(arr[i], arr[rightindex]);
          i = rightindex;
        }
        else
        {
          break;
        }
      }
      else if (leftindex <= size)
      {
        if (arr[i] < arr[leftindex])
        {
          swap(arr[i], arr[leftindex]);
          i = leftindex;
        }
        else
        {
          break;
        }
      }
      else if (rightindex <= size)
      {
        if (arr[i] < arr[rightindex])
        {
          swap(arr[i], arr[rightindex]);
          i = rightindex;
        }
        else
        {
          break;
        }
      }
      else
      {
        break;
      }
    }
  }

  void print()
  {
    for (int i = 1; i <= size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

void heapify(int arr[], int n, int i)
{
  int largest = i;
  int leftindex = 2 * i;
  int rightindex = 2 * i + 1;
  if (leftindex <= n && arr[largest] < arr[leftindex])
  {
    largest = leftindex;
  }
  if (rightindex <= n && arr[largest] < arr[rightindex])
  {
    largest = rightindex;
  }

  if (largest != i)
  {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapsort(int arr[], int n)
{
  // Build heap (rearrange array)
  for (int i = n / 2; i > 0; i--)
  {
    heapify(arr, n, i);
  }

  // One by one extract an element from heap
  for (int i = n; i > 1; i--)
  {
    // Move current root to end
    swap(arr[1], arr[i]);

    // call max heapify on the reduced heap
    heapify(arr, i - 1, 1);
  }
}

int main()
{
  heap h;
  h.insert(10);
  h.insert(20);
  h.insert(30);
  h.insert(40);
  h.insert(50);
  h.print();

  int arr[6] = {-1, 20, 30, 40, 50, 60};
  int n = 5;
  for (int i = n / 2; i > 0; i--)
  {
    heapify(arr, n, i);
  }
  cout << "Printing the heap" << endl;
  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  heapsort(arr, n);
  cout << "Printing the sorted array" << endl;
  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}