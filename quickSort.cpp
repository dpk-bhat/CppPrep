#include <iostream>

using namespace std;

void swapInt(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int partitionIndex = low;
    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            swapInt(&arr[i], &arr[partitionIndex]);
            partitionIndex++;
        }
    }
    swapInt(&arr[high], &arr[partitionIndex]);
    return partitionIndex;
}

void quickSort(int arr[], int low, int high)
{

    if (high > low)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    srand(time(NULL));
    int n = 10, arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = n - 1; i > 0; i--)
    {
        int randInedx = rand() % i;
        swapInt(&arr[i], &arr[randInedx]);
    }

    printArr(arr, n);

    quickSort(arr, 0, n - 1);

    printArr(arr, n);
}