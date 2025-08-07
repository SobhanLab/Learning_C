#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100], s, value;

    cout << "Enter Size of Array: ";
    cin >> s;

    cout << "Enter Elements of Array: ";
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value you want to find: ";
    cin >> value;

    int pos = -1;

    for (int i = 0; i < s; i++) {
        if (arr[i] == value) {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1) {
        cout << "Number not found" << endl;
    } else {
        cout << "The Number position is: " << pos << endl;
    }

    return 0;
}
