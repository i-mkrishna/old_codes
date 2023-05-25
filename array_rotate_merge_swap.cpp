#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void printArray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0; i<size ; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void reverseArray(int arr[], int size,int m){
    int s = m+15;
    int e = size -1;
    while (s<=e){
        swap(arr[s],arr[e]);
        s++;e--;
    }
    printArray(arr,size);
}

void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0,j = 0 , k = 0;
    while (i<n && j<m){
        if(arr1[i] <arr2[j]){
            arr3[k] = arr1[i];
            k++;i++;
        }else{
            arr3[k] = arr2[j];
            k++;j++;
        }
    }
    // copy frist array k element ko
    while (i<n){
        arr3[k] = arr1[i]; // arr3[k++] = arr1[i++] can be used
        k++;i++; // to remove k++;i++;
    }
    // copy second array k element ko
    while (i<n){
        arr3[k] = arr2[j];
        k++;j++; 
    }
    printArray(arr3,k);
}

void moveZeros(int arr[],int n){
    // shifting all nonZeros into right
    int i = 0; // indicating nonZero value
    for(int j = 0; j<n; j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i ++;
        }
    }
}

void rotateArray(int arr[], int size, int m){
    int temp[size] = {};
    for (int i = 0; i < size; i++){
        temp[(i+m)%size] = arr[i];
    }
    // copy temp into arr
    arr = temp ;
    // for (int i = 0; i < size; i++){
    //     cout << arr[i] <<" ";
    // }
}

bool sortedRotated(int arr[], int size){
    int count = 0;
    for (int i = 1; i < size; i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[size-1]>arr[0]){
        count++;
    }
    return count <= 1;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m){
    int i = n- 1;
    int j = m - 1;
    vector<int> ans;

    int carry = 0;
    while (i >= 0 && j >=0){
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;j--;
    }
    // Frist case
    while (i >= 0){
        int sum = a[i] + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    } // Second case
    while (j >= 0){
        int sum = b[j] + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0){
        int sum = carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    return ans;
}


int main(){

    // int arr[7] = {1,2,3,4,6,7,8};

    // swapAlternate(arr,7);
    // printArray(arr,7);



// Reverse Array
    // int n,m;
    // cin >> n;
    // int arr[20];
    // for(int i = 0; i<n ; i++){
    //     cin >> arr[i];
    // }
    // cin >> m;
    // reverseArray(arr,n,m);


// Merge Two Sorted Array 
    
    // int arr1[5] = {1, 3, 5, 7, 9};
    // int arr2[3] = {2, 4, 6};

    // int arr3[8] = {0};
    // mergeArray(arr1, 5, arr2, 3,arr3);


// Rotate Array
    // int n,m;
    // cin >> n;
    // int arr[15];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // cin >> m;
    // rotateArray(arr,n,m);
    // // printArray(arr,n); /// Problem or doubt


// Sorted and Rotated Array

    // int n;
    // cin >> n;
    // int arr[15];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // cout << sortedRotated(arr,n);
     

// Add Two Array

    vector<int> a;
    vector<int> b;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    b.push_back(6);
    b.push_back(7);
    b.push_back(8);
    b.push_back(9);
    b.push_back(10);
    b.push_back(11);
    b.push_back(12);

    cout << findArraySum(a,5,b,7);
    
 

    return 0;
}