#include <iostream>

using namespace std;

void reverseArr(int arr[], int front, int end)
{
    if (front < end)
    {
        int temp = arr[front];
        arr[front] = arr[end];
        arr[end] = temp;
        reverseArr(arr, ++front, ++end);
    }
    return;
}
int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
    }
    reverseArr(arr, 0, 100);
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << endl;
    }
}