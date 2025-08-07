#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[3][4];
    cout << "Enter Values: " <<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
        cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    for(int i=0; i<3; i++){
       for(int j=0; j<4; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}


