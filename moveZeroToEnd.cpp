#include <iostream>

using namespace std;

void moveZeorToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count < n)
    {
        arr[count++] = 0;
    }
}

int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 3;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeorToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << endl;
}