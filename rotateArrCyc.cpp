#include <iostream>

using namespace std;

void rotareArrCyc(int arr[], int n, int c)
{
    while (c > 0)
    {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
        c--;
    }
}

int main()
{
    int arr[100], c = 0;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    cout << "Enter the number of rotations" << endl;
    cin >> c;
    int n = sizeof(arr) / sizeof(arr[0]);
    rotareArrCyc(arr, n, c);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}