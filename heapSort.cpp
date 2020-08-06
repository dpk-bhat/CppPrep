#include <iostream>

using namespace std;

class MaxHeap
{
private:
    int *heap, size;
    int l(int i) {
        return 2*i+1;
    }
    int r(int i) {
        return 2*i+2;
    }
    int p(int i) {
        return (i+1)/2;
    }
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
public:
    MaxHeap(int size);
    void heapify(int arr[], int n);
    void buildHeap(int arr[], int n);
};

MaxHeap::MaxHeap(int size) {
    size = 0;
    heap = new int[size];
};

void MaxHeap::buildHeap(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        heap[size++] = arr[i];
        heapify(arr, size)
    }

};

int main() {

}