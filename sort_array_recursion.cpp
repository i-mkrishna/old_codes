#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortArray(int *arr,int n){
    // Base case
    if(n==0 || n==1){
        return;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
}



int main(){




    return 0;
}