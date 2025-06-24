#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void str() {
    cout << "Hello Sylhet" << endl;
}

int* add(int* a, int* b) {
    int* c = new int;
    *c = (*a)+(*b);
    return c;
}

int main() {
    int a=2, b=4;
    int *P = add(&a, &b);
    str();
    cout << *P;
    delete P;
}