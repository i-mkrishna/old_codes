#include<bits/stdc++.h>
using namespace std;

void inputData(int **ptr, int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            std::cin >> ptr[i][j];
        }
    }
}

void printData(int **ptr, int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            std::cout << ptr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deleteData(int **ptr, int row){
    for (int i = 0; i < row; i++){
        delete[] ptr[i];
    }
    delete[] ptr;
}

int main(){
    int row,column;
    std::cin >> row >> column;
    int **ptr = new int*[row];
    for (int i = 0; i < row; i++){
        ptr[i] = new int[column];
    }
    // for (int i = 0; i < row; i++){
    //     for (int j = 0; j < column; j++){
    //         std::cin >> ptr[i][j];
    //     }
    // }
    // for (int i = 0; i < row; i++){
    //     for (int j = 0; j < column; j++){
    //         std::cout << ptr[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    
    // for (int i = 0; i < row; i++){
    //     delete[] ptr[i];
    // }
    // delete[] ptr;

    inputData(ptr,row,column);
    printData(ptr,row,column);
    deleteData(ptr,row);


    return 0;
}