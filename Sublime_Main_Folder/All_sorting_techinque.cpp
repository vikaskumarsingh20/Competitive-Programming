// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

//sELCTIION SORTING WITH LESS TIME COMPLEXTIXITY
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
  int i, j;
  for (i = 0; i < n-1; i++)  
  
  // Last i elements are already in place
  for (j = 0; j < n-i-1; j++)
    if (arr[j] > arr[j+1])
      swap(&arr[j], &arr[j+1]);
}
//INSERTION SORTING TECHNIQUE 
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver code
int main()
{
  cout<<"vikas singh:";
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr, n);
    selectionSort(arr,n);
    insertionSort(arr,n);
  cout<<"Sorted array: \n";
  printArray(arr, n);
  return 0;
}

// This code is contributed by rathbhupendra

