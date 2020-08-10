#include <iostream>

using namespace std;

void swapInt(int arr[], int i, int randIndex)
{
    int temp = arr[i];
    arr[i] = arr[randIndex];
    arr[randIndex] = temp;
}

void fisherYates(int arr[], int n)
{
    for (int i = n - 1; i > 1; i--)
    {
        int randIndex = rand() % i;
        swapInt(arr, i, randIndex);
    }
}

int main()
{
    srand(time(NULL));
    int arr[100] ={ 0 };
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    fisherYates(arr, 100);
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << "\t";
    }
}