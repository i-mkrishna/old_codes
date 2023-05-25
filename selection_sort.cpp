#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void selectionSort(int arr[], int n){
    // size of array is small
    for(int i = 0; i<(n-1); i++){
        int minIndex = i;

        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}




int main(){

    // Wrong approach by me
    // vector<int> arr[7] = {1,8,4,2,6,9,11};
    // selectionSort(vector arr[], 7);
    // for(int i = 0; i<7; i++){
    //     cout << arr[i] << endl;
    // }

    /* 
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    selectionSort(arr,n);

    for(int i = 0; i<n; i++){
        cout <<  arr[i] << " ";
    }  */


    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
      

    return 0;
}