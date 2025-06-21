#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int Esum(int* A, int size) {
    int sum=0;
    for(int i=0; i<size; i++) {
        sum+=A[i];
    }
    return sum;
}

int main() {
    int A[] = {1,2,3,4};
    int size = sizeof(A)/sizeof(A[0]);
    int total = Esum(A, size);
    cout << total;
}