#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int add(int a, int b)  {
    return a+b;
}

void print(char* name) {
    cout << "Hello " << name << endl;
}

int main() {
    int c;
    char name[] = "Sylhet";
    int (*P)(int,int);
    void (*ptr)(char*);
    ptr = print;
    ptr(name);
    P = &add;
    c = (*P)(2,3);
    cout << c;
}