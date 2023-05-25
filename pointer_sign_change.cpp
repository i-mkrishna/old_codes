#include<bits/stdc++.h>
using namespace std;

void changeSign(int *p){
    *p = (*p)*(-1);
}

void square(int *p){
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}

int main(){
    // int i = 7;
    // int *p = &i;

    // int **ptr = &p;
    // cout << &p << endl;
    // cout << p << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;

    // cout << p << endl;
    // cout << *(ptr) << endl;
    // cout << &i << endl;

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **(ptr) << endl;

    // int a = 10;
    // changeSign(&a);
    // cout << a << endl;

    // square(&a);
    // cout << a << endl;

    int a = 7;
    int *p = &a;
    int **ptr = &p;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << p << endl;
    cout << &p << endl;


    
    return 0;
}