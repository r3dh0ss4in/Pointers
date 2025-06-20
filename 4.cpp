#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    cout << "Address of r is " << &r << " " << "value of x is " << ***r << endl;
    cout << "Address of q is " << &q << " " << "value of x is " << **q << endl;
    cout << "Address of p is " << &p << " " << "value of x is " << *p << endl;
    cout << "Address of x is " << &x << " value of x is " << x << endl;
    cout << "Address of q is " << r << " " << "value of x is " << ***r << endl;
    cout << "Address of p is " << *r << " " << "value of x is " << ***r << endl;
    cout << "Address of x is " << **r << " " << "value of x is " << ***r << endl;
    cout << "Address of p is " << q << " " << "value of x is " << ***r << endl;
    ***r = 12;
    cout << "value of x is " << x << endl;
    **q = *p+2;
    cout << "value of x is " << x << endl;
}