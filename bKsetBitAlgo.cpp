#include<iostream>
#include<typeinfo>

using namespace std;

int countSetBit(int n) {
    int count = 0;
    while (n)
    {
        n = n&n-1;
        count++;
    }
    return count;
}

bool isBleak(int n) {
    for (int i = 1; i < n; i++)
    {
        if (i+countSetBit(i) == n) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    cout<<countSetBit(n)<<" "<<isBleak(n)<<endl;
}

