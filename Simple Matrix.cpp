#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[3][4], B[3][4];

    //Scanning A Matrix
    cout << "Enter Values For A: " <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
        cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
        cout << "\n";
    }

    // Printing A Matrix
    for(int i=0; i<3; i++){
       for(int j=0; j<4; j++){
            cout <<" " << A[i][j] << " ";
        }
        cout << "\n";
    }

        //Scanning B Matrix
    cout << "\n\nEnter Values For B: " <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
        cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
        cout << "\n";
    }

    // Printing B Matrix
    for(int i=0; i<3; i++){
       for(int j=0; j<4; j++){
            cout <<" " << B[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}
