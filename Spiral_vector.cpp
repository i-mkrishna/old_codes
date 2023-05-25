#include<bits/stdc++.h>
#include<vector>
using namespace std;


void printArray(int arr[][4], int n, int m){
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }
}

void printVector_2D(vector<vector<int>> vec){
    for (auto it : vec) {
        //it is now an 1D vector
        for (auto ij : it) {
            cout << ij << " ";
        }
        cout << endl;
    }
}

void sumRow_wise(int arr[][4], int n, int m){
    cout << "Row wise sum" << endl;
    for (int i = 0; i < 3; i++){
        int sum = 0;
        for (int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

void sumCol_wise(int arr[][4], int n, int m){
    cout << "Col. wise sum" << endl;
    for (int i = 0; i < 4; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int largest_Row_sum(int arr[][4], int n, int m){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 3; i++){
        int sum = 0;
        for (int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is -> " << maxi <<endl;
    return rowIndex;
}

vector<int> wave_Print(vector<vector<int>> arr, int nRows, int mCols){
    vector<int> ans;
    for(int col = 0; col < mCols; col++){
        if(col & 1){
            // odd Index -> Bottom to top
            for(int row = nRows-1; row >= 0; row++){
                // cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // 0 or even index -> top to bottom
            for(int row = 0; row < nRows; row++){
                // cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

vector<int> spiralOrder(vector<vector<int>> & matrix){
    
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();
    
    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total){
        
        // print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++){
            ans.push_back(matrix[startingCol][index]);
            count++;
        }
        startingRow++;

        // print ending col
        for (int index = startingRow; count < total && index <= endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //ending col
        for (int index = endingCol; count < total && index >= startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // starting col
        for (int index = endingRow; count < total && index >= startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

bool binarySearch_2D(vector<vector<int>> & matrix, int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col -1;
    
    int mid = start + (end - start)/2;

    // int element = matrix[mid/col][mid%col];

    while (start <= end){

        if(matrix[mid/col][mid%col] == target){
            return 1;
        }
        else if(matrix[mid/col][mid%col] < target){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid =  start + (end - start)/2;

    }
    return 0;
}

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}


int main(){
     
     // Row wise sum
    int arr[3][4];
    cout <<"Enter Element" << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;
    if(isPresent(arr,target,3,4)){
        cout << "target value is in the matrix" << endl; 
    }
    else{
        cout << "target value "
    }
    printArray(arr,3,4);
    /* sumRow_wise(arr,3,4);
    sumCol_wise(arr,3,4);
    int ansIndex = largest_Row_sum(arr,3,4);
    cout << "Max row is at index -> " << ansIndex << endl;;
    */



    // vector<vector<int>> vec(4, vector<int>(5));
    // int num;
    // for (int i = 0; i < 4; i++) {
    //     vector<int> v1;
    //     for (int j = 0; j < 5; j++) {
    //         cin >> num;
    //         v1.push_back(num);
    //     }
    //     vec.push_back(v1);
    // }
    // for (auto it : vec) {
    //     //it is now an 1D vector
    //     for (auto ij : it) {
    //         cout << ij << " ";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}