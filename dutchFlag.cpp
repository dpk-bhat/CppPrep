#include<iostream>

using namespace std;

void swapInt(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void dutchFlag(int arr[], int n) {
    int redIndex = 0, whiteIndex = 0, blueIndex = n-1;
    while (whiteIndex<=blueIndex)
    {
        printArr(arr, n);
        int color = arr[whiteIndex];
        if (color == 0) {
            swapInt(&arr[whiteIndex], &arr[redIndex]);
            redIndex++;
            whiteIndex++;
        }
        else if (color == 1)
        {
            whiteIndex++;
        }
        else
        {
            swapInt(&arr[blueIndex], &arr[whiteIndex]);
            blueIndex--;
        }
    }
}

int main() {
    srand(time(NULL));
    int n = 10, arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 3;
    }
    for (int i = n-1; i >0; i--)
    {
        int randIndex = rand() % i+1;
        swapInt(&arr[i], &arr[randIndex]);
    }
    dutchFlag(arr, n);
    printArr(arr, n);
}