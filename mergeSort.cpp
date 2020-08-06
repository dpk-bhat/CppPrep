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

int mergeSort(int arr[], int l, int h, int n)
{
    int mid = (l + h) / 2;
}

int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    shuffle(arr, 100);
    mergeSort(arr, 0, 100, 100);
}