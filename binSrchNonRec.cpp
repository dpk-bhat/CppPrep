#include <iostream>

using namespace std;

int main()
{
    int arr[100], key;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i * i;
    }
    cout << "Enter the key you want to search" << endl;
    cin >> key;
    int low = 0, high = 100, mid;
    bool flag = false;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "Key found at position: " << mid << endl;
            flag = true;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!flag)
    {
        cout << "Key not found in Array" << endl;
    }
}