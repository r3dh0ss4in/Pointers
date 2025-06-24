#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n;
    cin >> n;
    int *A = new int[n];
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            A[i] = i+2;
        }
    }
    delete[] A;
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            cout << A[i] << " - " << &A[i] << endl;
        }
    }
    cout << endl;
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            A[i] = i+2;
        }
    }
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            cout << A[i] << " - " << &A[i] << endl;
        }
    }
    delete[] A;
}