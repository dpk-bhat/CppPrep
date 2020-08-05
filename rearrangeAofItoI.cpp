#include <iostream>

using namespace std;

void aOfItoI(int arr[], int n)
{
    int array[100];
    for (int i = 0; i < n; i++)
    {
        array[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] < n)
        {
            array[arr[i]] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = array[i];
    }
}

int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 102;
    }
    int n = 100;
    aOfItoI(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}