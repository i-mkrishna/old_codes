#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int fibonacci(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    cout <<  fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    // int n;
    // cin >> n;

    // int ans = factorial(n);
    // cout << ans << endl;

    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}