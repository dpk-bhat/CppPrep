#include <iostream> 
// #include <chrono>
using namespace std;
// usiong namespace std::chrono;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[1000];
    for (int i = 0; i < 1000; i++)
    {
        arr[i] = i;
    }
    for (int i = 999; i > 1; i--)
    {
        int randIndex = rand() % i;
        int temp = arr[i];
        arr[i] = arr[randIndex];
        arr[randIndex] = temp;
    }


    int n = sizeof(arr) / sizeof(arr[0]);

    // auto start = high_resolution_clock::now();
    heapSort(arr, n);
    // auto stop = high_resolution_clock::now();

    cout << "Sorted array is \n";
    printArray(arr, n);
    // auto duration = duration_cast<microseconds>(stop - start);
    // cout<<"Time taken by function "<<duration.count()<<" microseconds"<<endl;
}