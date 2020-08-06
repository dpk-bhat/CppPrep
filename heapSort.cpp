#include<iostream>

using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < 100; i++)
    {
        cout<<arr[i]<<"\t";
        if ((i+1)%15==0)
            cout<<endl;
    }

}
// MaxHeapify: For array arr of size n, heapify with top down approach
/*  This function considers i as the root for the binary (sub)tree,
    and recursively converts its child sub trees to max heap */
void heapify(int arr[], int n, int i) {
    int lar = i;
    int l = 2*i;
    int r = 2*i+1;

    if (l<n && arr[l] > arr[lar]) {
        lar = l;
    }
    if (r<n && arr[r] > arr[lar]) {
        lar = r;
    }
    if (lar != i) {
        heapify(arr, n, lar);
    }
}

void heapSort(int arr[], int n) {
    // Convert the existing array into MaxHeap
    for (int i = (n/2) - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n-1; i >=0; i--)
    {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;

        heapify(arr, n, 0);
    }


}

int main() {
    int arr[100];
    // arr[i] = i
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    // Shuffling the Array
    for (int i = 99; i > 1; i--)
    {
        int randIndex = rand() % i;
        int temp = arr[randIndex];
        arr[randIndex] = arr[i];
        arr[i] = temp;
    }

    printArr(arr, 100);

    heapSort(arr, 100);

    printArr(arr, 100);
}