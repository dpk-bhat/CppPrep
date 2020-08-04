#include <iostream>

using namespace std;

void reverseArr(int arr[], int front, int end)
{
    if (!(front < end))
    {
        return;
    }
    int temp = arr[front];
    arr[front] = arr[end];
    arr[end] = temp;
    reverseArr(arr, ++front, --end);
}
int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    reverseArr(arr, 0, 99);
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << "\t";
    }
}