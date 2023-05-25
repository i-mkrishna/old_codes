#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int *arr, int s, int e){
    for(int i=s;i<=e;i++){
        cout << arr[i] << " ";
    }cout << endl;
}

bool isSorted(int *arr,int size){
    if((size==0)||(size==1)){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

bool linearSearch(int *arr, int size, int key){
    // base case
    if(size == 0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    else{
        bool remainingPart = linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}

bool binearySearch(int *arr, int s, int e, int key){
    cout << endl;
    print(arr,s,e);
    // base case

    if(s>e){
        return -1; // element not found
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key){
        return 1; // key found
    }

    if(arr[mid] < key){
        return binearySearch(arr, mid +1,e,key);
    }
    else{
        return binearySearch(arr,s,mid-1,key);
    }
}


int main(){

    /*
    int arr[5] = {0,2,7,5,4};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    */
   /*
    int arr[5] = {0,2,7,5,4};
    int size = 5;
    int key = 7;
    bool ans = linearSearch(arr,size,key);

    if(ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Absent" << endl;
    }
    */

    // BINEARY SEARCH
    int arr[5] = {0,2,7,5,4};
    int size = 5;
    int key = 7;
    bool ans = binearySearch(arr,0,4,key);

    if(ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Absent" << endl;
    }

    return 0;
}