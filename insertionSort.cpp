#include <iostream>

using namespace std;

void shuffle(int arr[], int n)
{
    for (int i = n - 1; i > 1; i--)
    {
        int randIndex = rand() % i;
        int temp = arr[randIndex];
        arr[randIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 10 == 0)
            cout << endl;
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int k = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
}

int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    shuffle(arr, 100);
    printArr(arr, 100);
    bubbleSort(arr, 100);
    printArr(arr, 100);
}