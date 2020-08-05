#include <iostream>

using namespace std;

// Swap numbers of arr[]
void swapInt(int arr[], int i, int randIndex)
{
    int temp = arr[i];
    arr[i] = arr[randIndex];
    arr[randIndex] = temp;
}

// Swap 2 numbers
void swapInt(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fisher Yates Algo to shuffle arr
void shuffel(int arr[], int n)
{
    for (int i = n - 1; i > 1; i--)
    {
        int randIndex = rand() % i;
        swapInt(arr, i, randIndex);
    }
}

int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    shuffel(arr, 100);
    cout << "Before sorting :" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << endl;
    }

    // bubble sort logic

    for (int i = 0; i < 99; i++)
    {
        for (int j = 0; j < 100 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapInt(&arr[j], &arr[j + 1]);
            }
        }
    }
    cout << "Afte sorting :" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << endl;
    }
}