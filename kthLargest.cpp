/*
    For better understanding please refer heapsort.cpp
 */

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

void heapify(int arr[], int len, int root) {
    int leftChild = 2*root + 1;
    int rightChild = 2*root + 2;

    int largest = root;
    if (leftChild<len && arr[leftChild]>arr[largest])
    {
        largest = leftChild;
    }
    if (rightChild<len && arr[rightChild]>arr[largest])
    {
        largest = rightChild;
    }
    if (largest != root)
    {
        swapInt(&arr[root], &arr[largest]);
        heapify(arr, len, largest);
    }
}

void heapSort(int arr[], int n, int k) {
    for (int i = n/2-1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    // We can obtain kth largest element by removing moving k-1 nodes to the end of the array
    // Thus we will end up with kth largest element in 0th index
    for (int i = n-1; i >n-k; i--)
    {
        // Uncomment below line to understand the stepwise transition
        // printArr(arr, n); 
        swapInt(&arr[i], &arr[0]);
        heapify(arr, i, 0);
    }
}

int main() {
    srand(time(NULL));
    int n = 10, arr[n], k;
    // Considering Array of size n(10) with elemts as powers of 2
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2<<i;
    }
    // Shufflling array; as usual Fisher Yates
    for (int i = n-1; i > 0; i--)
    {
        int randIndex = rand() %i;
        swapInt(&arr[i], &arr[randIndex]);
    }
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    heapSort(arr, n, k);
    cout<<"Kth largest elemet for k: "<<k<<" is "<<arr[0]<<endl;
}