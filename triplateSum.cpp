#include<iostream>
#include <cmath>
using namespace std;


/* void func(int a[]){
    cout << sizeof(a) << endl;
} 


int linearSearch(int arr[], int size,int key){
    int x;
    for (int i = 0; i < size; i++){
        if (key == arr[i]){
            x = i;
            return x;
            exit;
        }
        
    }
    return -1;
}

int duplicateSearch(int arr[],int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                ans = i;
            }
        }   
    }
    return ans;
}

int pairSum(int arr[],int size, int sum){
    int pair = 0;
    for (int  i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(sum == arr[i] + arr[j]){
                pair++;
            }
        }
    }
    return pair;
}

int uniqeSearch(int arr[],int size){
    int ans;
    for (int i = 0; i < size-1; i++){
        // while (i != j){
        //     if(arr[i] == arr[j]){
        //         return i;
        //     }
        //     j++;
        // }
        for (int j = i+1; j < size; j++){
            if(arr[i] != arr[j] ){
                ans = i;
            }
        } 
    }
    cout << arr[ans] << endl;
   return ans; 
}

int tripletSum(int arr[],int size, int sum){
    int pair =0;
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            for (int k = j+1; k < size; k++){
                if(sum == arr[i]+arr[j]+arr[k]){
                    pair++;
                }
            }
            
        }
        
    }
    cout << pair << endl;
    return pair;
}

int pushZeros(int arr[],int size){
    int k;
    for (int i = 0; i,k < size; i++){
        if (arr[i] != 0){
            arr[k] = arr[i];
            k++;
        }  
    }
    for (int i = k; i < size; i++){
        arr[i] = 0;
    }
    
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    //int mid = (start + end)/2;
    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key >arr [mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        //mid = (start + end)/2 ;
        mid = start + (end - start)/2;
    }
    return -1;
} 

int reverseArray(int arr[],int size){
    for (int i = 0; i < size; i++){
        swap(arr[i],arr[size-1]);
    }
    return 0;
}

int rotateArray(int arr[], int size, int index){
    // 1 APPROACH
    // while (index != 0){
    //     int temp = arr[0];
    //     for (int i = 0; i <= size; i++){
    //         arr[i] = arr[i+1];
    //     }
    //     arr[size-1] = temp;
    //     index--;
    // }
    // for (int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }
    
    // return 0;

    // 2 APPROACH
    // int temp[index];
    // for (int i = 0; i < index; i++){
    //     temp[i] = arr[i];
    // }
    // for (int i = 0; i < size - index; i++){
    //     arr[i] = arr[i + index];
    // }
    

    // 3 APPROACH
    // for (int i = 0; i < size/2; i++){
    //     swap(arr[i],arr[size-1-i]);
    // }

    // for (int i = size-index; i < size; i++){
    //     swap(arr[i],arr[i+1]);
    // }

    // for (int i = 0; i < size-index-1; i++){
    //     swap(arr[i],arr[size-index-1-i]);
    // }
    
    // for (int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }

   return 0;
}

int _2nd_largest(int arr[], int size){
    int largest = INT32_MIN;
    int second_largest = INT32_MIN;
    for(int i = 0; i < size; i++){
        if (arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
    }
    cout << second_largest << " ";
    return 0;
}

void sort_0_1_2(int arr[], int size){
    // 1 Approach counting 0,1,2

    // 2 Approach Insertion sort
    for (int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i - 1; 
        for (; j >= 0; j--){
            if (arr[j] >= temp){
                arr[j+1] = arr[j];
            } 
            else
                break;
        }
        arr[j+1] = temp;
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    // 3 Approach
    // temp ma 0's and 2's ko left most and rightmost ma place karkka 
    // put 1 in b/w 
}
*/

void mergeTwoArray(int arr1[],int arr2[],int size1, int size2){
    int arr3[size1+size2];
    for (int i,j,k= 0; i < size1 || j  < size2 || k < size1 + size2; i++,k++){
        if (arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            j++;
        }
        else{
            arr3[k] = arr2[j];
        }  
    }
    
}

int main(){
/*      1234554321
        1234**4321
        123****321
        12******21
        1********1     */
    /* nt n;
    cin >> n;
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        for (int k = n-1; k >= i; k--){
            cout << "*";
        }
        cout << endl;
    }

    // for (int i = 1; i <= n; i++){
    //     for (int j = n; j >= i; j--){
    //         cout << j-i+1;
    //     }
    //     for (int k = 2; k <= i; k++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // } */
    
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // int sum = 0;
    // for (int i = 0; i < n; i++){
    //     sum = sum + arr[i];
    // }
    // cout << "sum" << sum;
    

/*     LINEAR SEARCH ????    
 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << linearSearch(arr,n,key);
    */


//  Unique 
    // int n;
    // cin >> n;
    // int arr[1000];
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // cout << arr[uniqeSearch(arr,n)];
   
// Pair Sum
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // int sum;
    // cin >> sum;
    // cout << pairSum(arr,n,sum);

// DUPLICATE 
    // int n;
    // cin >> n;
    // int arr[1000];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // cout << arr[duplicateSearch(arr,n)];
    
    
// TRIPLET SUM
    // int n;
    // cin >> n;
    // int arr[1000];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // int sum;
    // cin >> sum;
    // cout << tripletSum(arr,n,sum);

//  PUSH ZEROS TO END
    // int n;
    // cin >> n;
    // int arr[1000];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // pushZeros(arr,n);

//  BINARY SEARCH
    // int n,key;
    // cin >> n;
    // int arr[15];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // cin >> key;
    // cout << binarySearch(arr,n,key);


// ROTATE ARRAY
    // int size, index;
    // cin >> size;
    // int arr[15];
    // for (int i = 0; i < size; i++){
    //     cin >> arr[i];
    // }
    // cin >> index;
    // rotateArray(arr,size,index);


// 2nd LARGEST ELEMENT
    // int n;
    // cin >> n;
    // int arr[15];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // _2nd_largest(arr,n);


//     SORT 0 1 2
    // int n;
    // cin >> n;
    // int arr[15];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // sort_0_1_2(arr,n);

    return 0;
}