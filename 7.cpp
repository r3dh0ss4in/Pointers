#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int B[2][3] = 
                {{2,3,6},
                {4,5,8}};
    int (*P)[3] = B;
    // ...... Print address of B[0][0]
    cout << *P << endl << B << endl << &B[0] << endl;
    cout << *B << endl << B[0] << endl << &B[0][0] << endl;
    // ......
    cout << "Using loop -->" << endl;
    for(int i=0; i<2; i++) {
        cout << "Address of " << *B[i] << " is " << B[i] << endl;
    }
    cout << "Print every products" << endl;
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cout << "Address of " << B[i][j] << " is " << *(B+i)+j << endl;
            // B[i][j] = *(B[i]+j) = *(*(B+i)+j)
        }
    }
}