#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int a = 1025;
    int *p;
    p = &a;
    cout << sizeof(int) << endl;
    cout << p << " " << *p << endl;
    cout << p+1 << " " << *(p+1) << endl; // garvage value
    char *po;
    po = (char*)p; // Typecasting
    cout << sizeof(char) << endl;
    cout << (void*)po << " " << (int)*po << endl;
    // 1025 = 00000000 00000000 00000100 00000001
    //                                       |
    //                                       ---> it's mean 'one' and char indicate always last byte
    cout << (void*)(po+1) << " " << (int)*(po+1) << endl;
    // 1025 = 00000000 00000000 00000100 00000001
    //                               |
    //                               ---> it's 'four' in char
    // void pointer - Genric pointer
    void *pt;
    pt = p;
    cout << pt << " " << endl; //(pt+1) << endl;--> it will give error also *pt
}