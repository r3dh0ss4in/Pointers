#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void func(int A[][2][2]) {// (*A)[2][2] also works!
    // Address of A[0][0][0];
    cout << A << endl << *A << endl << &A[0][0] << endl;
    cout << *(A[0][1]) << " " << *(A[0][1]+1) << endl; // 7 9
    cout << *(A[0][3]) << " " << *(A[0][3]+1) << endl; // 6 1
}

int main() {
    int C[3][2][2] = {
        {
            {2,5}, {7,9}
        },
        {
            {3,4}, {6,1}
        },
        {
            {0,8}, {11,13}
        }
    };
    int (*P)[2][2] = C;
    func(C);
}