#include <bits/stdc++.h>
using namespace std;

int main() {
    int array1[100];
    int array2[100];
    int n;

    cout << "Number of Arrays?:" <<endl;
    cin >> n;

    cout << "Enter Elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> array1[i];
    }

    cout << "Array 1" <<endl;
    for(int i=0; i<5; i++)
    {
        cout << array1[i] <<" ";
    }

    for(int i=0; i<5; i++)
    {
        array2[i] = array1[i];
    }

    cout << "\nArray 2" <<endl;
    for(int i=0; i<5; i++)
    {
        cout << array2[i] <<" ";
    }

    return 0;
}

