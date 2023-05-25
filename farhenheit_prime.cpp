#include<iostream>
#include <cmath>
using namespace std;

bool isPrimee(int x){
    if(x == 1 || x == 0){
        return false;
    }
    for(int i = 2; i<=sqrt(x); i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int func(int a){
    a += 10;
    return 0;
}
void fahrenheit_value_BW_fahrenheit_value(    int start_Fahrenheit_value,int end_Fahrenheit_value,int step_Size){
    for(int i = start_Fahrenheit_value; i<=end_Fahrenheit_value; i+=20){
        float celcius = (i - 32) * 5/9;
        cout << celcius << endl;
    }
}
int main(){

    
    // int n;
    // cin >> n;
    // for(int i = 1 ;i <= n; i+=2){
    //     for(int j = n; j >= 1; j-=2){
    //         if(j>i){
    //             cout << " ";
    //         }
    //         else{
    //             cout <<"*";
    //         }
    //     }
    //     for (int j = 2; j <= i; j+=2){
    //        cout << "*"; 
    //     }
    //     cout << endl;
    // }
    // for (int i = n-2; i >= 1; i-=2){
    //     for (int k = n; k >= 1; k-=2){
    //         if(k>i){
    //             cout << " ";
    //         }
    //         else{
    //             cout << "*";
    //         }
    //     }
    //     for (int j = 2; j <= i; j+=2){
    //        cout << "*"; 
    //     }
    //     cout << endl;
    // }
    
    // for (int k = 1;  < ; k++){
    //         for(int l = i; k >= 1; k-=2){
    //         if(l>k){
    //             cout << " ";
    //         }
    //         else{
    //             cout <<"*";
    //         }
    //     }
    //     }
    // int a = 5;
    // func(a);
    // cout << a << " ";


    int start_Fahrenheit_value, end_Fahrenheit_value, step_Size;

    cin >> start_Fahrenheit_value >> end_Fahrenheit_value >> step_Size;
    fahrenheit_value_BW_fahrenheit_value(start_Fahrenheit_value, end_Fahrenheit_value, step_Size);

    // C = (°F − 32) x 5/9;
    
    /* for(int i = start_Fahrenheit_value; i<=end_Fahrenheit_value; i+=20){
        float celcius = (i - 32) * 5/9;
        cout << celcius << endl;
    }*/


    return 0;
}