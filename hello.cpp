#include<iostream>
#include<string>

using namespace std;

// Function to rotate d elements of the array arr[]
void rotate(int arr[], int d,int n){
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[i+d] = temp[i];
    }    
}

int main(){
    int n = 10;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    rotate(arr, 5, 10);

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
}