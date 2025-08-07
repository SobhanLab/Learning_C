#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[3][4] = { {1,3,5,7}, {2,4,6,8}, {5,10,15,20} };

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

