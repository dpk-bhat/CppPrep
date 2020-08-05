#include <iostream>

using namespace std;

int binSrch(int arr[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            binSrch(arr, l, mid - 1, key);
        }
        else
        {
            binSrch(arr, l + 1, h, key);
        }
    }
    return -1;
}

int main()
{
    int n = 5, i = 0, pivot = 0, key;
    int arr[] = {3, 4, 5, 1, 2};
    while (arr[i] < arr[i + 1])
    {
        i++;
    }
    pivot = i+1;
    cout << "Enter the key u want to search" << endl;
    cin >> key;
    int res1 = binSrch(arr, pivot, n, key);
    int res2 = binSrch(arr, 0, pivot, key);
    if (res1 == -1 && res1 == -1)
    {
        cout << key << " not found." << endl;
    }
    else
    {
        int finRes = res1 != -1 ? res1 : res2;
        cout << key << " found at position: " << finRes << endl;
    }
}