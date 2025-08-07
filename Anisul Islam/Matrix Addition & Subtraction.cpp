#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int nRow, nColom;

    cout << "Enter the Number of Row & Colums: ";
    cin >> nRow >> nColom;

    //Scanning A Matrix
    cout << "Enter Values For A: " <<endl;
    for(int i=0; i<nRow; i++){
        for(int j=0; j<nColom; j++){
        cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
        cout << "\n";
    }

    //Scanning B Matrix
    cout << "\nEnter Values For B: " <<endl;
    for(int i=0; i<nRow; i++){
        for(int j=0; j<nColom; j++){
        cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
        cout << "\n";
    }

    // Printing A Matrix
    cout << "A Matrix: " <<endl;
    for(int i=0; i<nRow; i++){
       for(int j=0; j<nColom; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }


    // Printing B Matrix
    cout << "B Matrix: " <<endl;
    for(int i=0; i<nRow; i++){
       for(int j=0; j<nColom; j++){
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }


    // Sum of Matrix
    for(int i=0; i<nRow; i++)
    {
       for(int j=0; j<nColom; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }

    }

    // Printing SUM Matrix
    cout << "\nA+B Matrix: " <<endl;
    for(int i=0; i<nRow; i++){
       for(int j=0; j<nColom; j++){
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}

