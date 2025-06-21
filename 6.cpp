#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void doub(int* A, int size) {
    int sum=0;
    for(int i=0; i<size; i++) {
        A[i] = A[i]*2;
    }
}

int main() {
    int A[] = {1,2,3,4};
    int size = sizeof(A)/sizeof(A[0]);
    doub(A, size);
    for(int i=0; i<size; i++) {
        cout << A[i] << endl;
    }
}