#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int a = 10;
    int *p = &a;
    cout << "Address p is " << p << endl;
    // Pointer arithmetic
    cout << "size of integer is " << sizeof(int) << " bytes" << endl;
    cout << "Address of p+1 is " << p+1 << endl;
}