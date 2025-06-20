#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int a;
    int *p = &a;
    a = 10;
    // p = &a;
    cout << "Address of p is " << p << endl;
    cout << "Value at p is " << *p << endl;
    int b = 20;
    *p = b;
    cout << "Address of p is " << p << endl;
    cout << "Value at p is " << *p << endl;
}