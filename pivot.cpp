#include<iostream>
using namespace std;

// int fristOcc(int arr[],int n, int key){
//     int start = 0, end = n-1;
//     int mid = start + (end - start)/2;
//     int ans = -1 ;
//     while (start<=end){  
//         if(arr[mid]==key){
//             ans = mid;
//             end = mid -1;
//         }
//         else if(arr[mid]<key){
//             start = mid + 1 ;
//         }
//         else if(arr[mid]>key){
//             end = mid - 1 ;
//         }
//         mid = start + (end - start)/2; 
//     }
//     return ans;
// }

// int lastOcc(int arr[],int n, int key){
//     int start = 0, end = n-1;
//     int mid = start + (end - start)/2;
//     int ans = -1 ;
//     while (start<=end){ 
//         if(arr[mid]==key){
//             ans = mid;
//             start = mid + 1;
//         }
//         else if(arr[mid]<key){
//             start = mid + 1 ;
//         }
//         else if(arr[mid]>key){
//             end = mid - 1 ;
//         }
//         mid = start + (end - start)/2; 
//     }
//     return ans;
// }

// int peak(int arr[],int n){
//     int s =0 ;
//     int e = n-1;
//     int i = s + (e - s)/2;
//     while(s<=e){
//         if(arr[i]<arr[i+1]){
//             s = i +1;
//         }
//         else{
//             e = i;
//         }
//         i = s + (e - s)/2;
//     }
//     cout<<i;
//     return i;
// }

int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while (start<end){
        
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    cout << start << endl;
    return start;
}



int main(){
    
    // int even[5]={1,2,2,2,5};

    // cout << "First Occ of 2 is at index " << fristOcc(even,5,2)<<endl;
    // cout << "last Occ of 2 is at index " << lastOcc(even,5,2);
    // int arr[6]={1,2,3,4,5,1};

    int arr[5] = {7,9,11,22,3};

    cout << "Pivot is " << getPivot(arr,5) << endl;

    

    return 0;
}