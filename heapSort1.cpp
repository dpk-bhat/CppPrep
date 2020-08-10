#include<iostream>

using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i) {
    int largest = i;
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;

    if (leftChild<n && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }
    if (rightChild<n && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }

    if (largest!=i)
    {
        swap(&arr[i], &arr[largest]);
        cout<<"Form Heapify"<<endl;
        printArr(arr, n);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n/2-1; i>=0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n-1; i >=0; i--)
    {
        cout<<"From HeapSort"<<endl;
        printArr(arr, n);
        swap(&arr[i], &arr[0]);
        heapify(arr, i, 0);
    }

}

int main() {
    int n = 10, arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    for (int i = n-1; i >0; i--) {
        int randIndex = rand() % i;
        int temp = arr[randIndex];
        arr[randIndex] = arr[i];
        arr[i] = temp;
    }
    printArr(arr, n);
    heapSort(arr, n);
    printArr(arr, n);
}