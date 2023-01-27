#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int*p = &a;
    char ch = 'a';
    char*pch = &ch;

    int b = 10;
    //int&a = b;

    cout<<a<<endl;
    int* c = &b;

    return 0;

}