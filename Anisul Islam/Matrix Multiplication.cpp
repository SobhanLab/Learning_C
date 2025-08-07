#include <bits/stdc++.h>
using namespace std;

int main() {
    int f[10][10], s[10][10], r[10][10];
    int r1, r2, c1, c2;

    cout << "Enter Rows & Columns for 1st Matrix: ";
    cin >> r1 >> c1;

    cout << "Enter Rows & Columns for 2nd Matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    while (c1 != r2) {
        cout << "Error! Column of first matrix must be equal to row of second matrix.\n";

        cout << "Enter Rows & Columns for 1st Matrix: ";
        cin >> r1 >> c1;

        cout << "Enter Rows & Columns for 2nd Matrix: ";
        cin >> r2 >> c2;
    }

    // First matrix input
    cout << "Enter values for First Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {  // Fixed uninitialized loop variable
            cout << "f[" << i << "][" << j << "] = ";
            cin >> f[i][j];
        }
    }

    // Second matrix input
    cout << "Enter values for Second Matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {  // Fixed uninitialized loop variable
            cout << "s[" << i << "][" << j << "] = ";
            cin >> s[i][j];
        }
    }

    // Printing First Matrix
    cout << "\nFirst Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << f[i][j] << " ";  // Fixed formatting issue
        }
        cout << "\n";
    }

    // Printing Second Matrix
    cout << "\nSecond Matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << s[i][j] << " ";  // Fixed formatting issue
        }
        cout << "\n";
    }

    return 0;
}
