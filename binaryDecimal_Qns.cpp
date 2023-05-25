#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// int checkTriangle(int x,int y, int z){

//     if(x == y == z){
//         return 1;
//     }
//     else if(x == y != z || x == z != y || y == z != x){
//         return 0;
//     }
//     else
//         return -1;
    
// }

// float avgThree(float x, float y, float z){
//     float avg = (x+y+z)/3; 
//     return avg;
// }

// int sumEven(int x){
//     int sum = 0;
//     for(int i = 2; i <= x ; i+=2){
//         sum += i;
//     }
//     return sum;
// }

// bool isPrime(int n){   
//     for (int i = 2; i < n/2; i++){
//         if (n % i == 0){
//             return false;
//             break;
//         }
//         else
//            return true;
//     }
// }

int power(int x, int y){
    int pow = 1;
    for(int i = 1 ; i<=y; i++){
        pow = pow * x; 
    }
    return pow;
}

// int fibb(int start, int last){
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     for (int i = 2; i < n; i++){
//         fib[i] = fib[i-1] + fib[i-2];
//     }
//     for(int i = 0; i<n ;i++){
//         cout << fib[i] << " ";
//     }
//     int f1 = 0,f2 = 1, f3 = 1;
//     int nextNumbers;
//     while(f1 <= last){
//         if(f1 >= start){
//             nextNumbers++;
//         }
//         f1 = f2;
//         f2 = f3;
//         f3 = f1 + f2;
//     }
//     return nextNumbers;
//     return 0;
// }

// bool checkValiditiyTri(int x, int y, int z){
//     if (x + y <= z || y + z <= x ||  z + x <= y)
//         return false;
//     else
//         return true;
// }

// bool isPrimee(int x){
//     if(x == 1 || x == 0){
//         return false;
//     }
//     for(int i = 2; i<=sqrt(x); i++){
//         if(x%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// bool isPerfectSquare(int x){
//     int a = sqrt(x);
//     return (a*a == x);
// }

// bool isfibonacci(int n){
//     return isPerfectSquare((5 * n*n + 4)) || isPerfectSquare(5 * n*n -4);
// }

// long long factiorial(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*factiorial(n-1);
// }

void termsAP(int n){
    // int i = 1;
    // int count = 0;
    // while (count <= n){
    //     int term = 3*i + 2;
    //     if(term % 4 != 0){
    //         cout << term << " ";
    //         count++;
    //     }
    //     i++;
    // }
    
}

// int reverseNo(int x){
//     int remainder,reverse = 0;
//     while (x%10 == 0){
//         x = x/10;
//     }
//     while (x != 0){
//         remainder = x%10;
//         reverse = reverse * 10 + remainder;
//         x = x/10;
//     }
//     while (x != 0){
//         remainder = x%10;
//         reverse = reverse * 10 + remainder;
//         x/10;
//     }
//     return reverse;
// }

// long long binaryDecimal(int x){
    // int result = 0, remainder;
    // while (x != 0){
    //     remainder = x%10;
    //     result = result * power(2,remainder);
    //     x = x/10;
    // }
    // for (int i = 0; i < ; i++){
    //     remainder = x%10;
    //     result += remainder * power(2,i);
    //     x = x/10;
    // }
    // while(x != 0){
    //     int i = 1;
    //     remainder = x%10;
    //     result += remainder * power(2,i);
    //     x = x/10;
    //     i++;
    // }///  RIGHT ANS
    // int ans = 0;
    // int placeValue = 0;
    // while(x != 0){
    //     int remainder = x%10;
    //     ans = ans + (remainder * power(2,placeValue));
    //     placeValue++;
    //     x = x/10;
    // }
   // return ans;
// }

// void squareRoot(int n){
//     // int root;
//     // root  = n; 
//     // cout << root;
//     // //return root;
//     //int temp,root;
//     // root = n/2;
//     // temp =0;
//     // while (root != temp ){
//     // }
//     int i = 1;
//     bool found = false;
//     while(!found){
//         // if(i * i == n){
//         //     cout << i;
//         //     found = true;
//         // }
//         i++;
//     } 
// }


// void count(string ch){
//     int character = 0, numbers = 0, spaces = 0;
//     for(int i = 0; i < ch.length(); i++){
//         if( (ch[i] >= 'a' && ch[i] <= 'z' ) || (ch[i] >= 'A' && ch[i] <= 'Z') ){
//             character++;
//         }
//         else if(ch[i] >= '0' && ch[i] <= 'Z'){
//             numbers++;
//         }
//         else{
//             spaces++;
//         }      
//     }
//     cout << character << " " << numbers << " " << spaces;
// }


// long long decimalBinary(int n){
//     int remainder;
//     int ans = 0, placeValue = 0;
//     while (n != 0){
//         remainder = n%2 ;
//         ans = ans + remainder * power(10,placeValue);
//         n = n/2;
//         placeValue++;
//     }
//     return ans;
// }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // int n ; 
    // cin >> n;
    // int arr[1000];
    // for(int i = 0 ; i<n ; i++){
    //     cin >> arr[i];
    // }
    // for(int i = 1; i<=n ; i++){
    //     cout << arr[n-i]<<" ";
    // }

    // CHECK TRIANGLE
    // int l1,l2,l3;
    // cin >> l1 >> l2 >> l3;

    // checkTriangle(l1,l2,l3);
    // // cout << checkTriangle(l1,l2,l3) << endl;
    // cout << checkTriangle;
    
    // AVGERAGE OF 3 No.
    // float n1,n2,n3;
    // cin >> n1 >> n2 >> n3;
    // avgThree(n1,n2,n3);
    // cout << avgThree(n1,n2,n3); 
    
    // SUM OF EVEN
    // int n;
    // cin >> n;
    // cout << sumEven(n) << endl;

    // GCD(GREATEST COMMON DIVISOR)
    // int n1,n2;

///// PRIME NO.
    // int n;
    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     if(isPrimee(i)){
    //         cout << i << " ";
    //     }
    // }

///// FIBONACCI NO.
    // int n;
    // cin >> n;

    // for(int i = 0; i<=n; i++){
    //     cout << i << " ";
    // }
    // // cout << fibb(0,n) << " ";

    // int l1,l2,l3;
    // cin >> l1 >> l2 >> l3;

    // if (checkValiditiyTri(l1,l2,l3) == true)
    // {
    //     cout << "Yes";
    // }
    // else
    // cout << "No";
    

// BASIC SALLARY 
    // int basic;
    // char ch;
    // cin >> basic >> ch;

    // int hra = .20 * basic;
    // int da = .50 * basic;
    // int pf = .11 * basic;
    // int allowance;
    // 
    /*
    switch (ch){
    case "A" :
        allowance = 1700;
        break;
    
    case "B" :
        allowance = 1500;
        break;
    
    default :
        allowance = 1300;
        break;
    }*/

    // if(ch == 'A'){
    //     allowance = 1700;
    // }
    // else if(ch == 'B'){
    //     allowance = 1500;
    // }
    // else{
    //     allowance = 1300;
    // }
    // cout << (basic + da + allowance + pf) << endl;
    

/////CHECK CASE
    // char ch;
    // cin >> ch;
    // if (ch>='a' && ch<='z')
    // {
    //     cout << 1 << endl;
    // }
    // else if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout << 0 << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }

/////Fehrenheite to celcius
    // int start_Fahrenheit_value, end_Fahrenheit_value, step_Size;

    // cin >> start_Fahrenheit_value >> end_Fahrenheit_value >> step_Size;

    // // C = (°F − 32) x 5/9;
    
    // for(int i = start_Fahrenheit_value; i<=end_Fahrenheit_value; i+=20){
    //     float celcius = (i - 32) * 5/9;
    //     cout << celcius << endl;
    // }

// ///////// pattern1
//     int n;
//     cin >> n;
//     // for (int i = 1; i <= n; i++){
//     //     for (int j = 0; j < i; j++){
//     //         cout << (i+j) ;
//     //     }
//     //     cout << endl;
//     // }

//     for(int i = 1 ;i <= n; i++){

//         for(int j = 1; j <=n; j++){
//             if(j<=n-i){
//                 cout << " ";
//             }
//             else{
//                 cout << i;
//             }
//         }
//         cout << endl;
//     }
// int n;
// cin >> n;
// int i = 1;
// 	int val = 1;
// 	while (i <= n) {
// 		int k = 1;
// 		while (k <= n - i) {
// 			cout << " ";
// 			k = k + 1;
// 		}

// 		int j = 1;
// 		while (j <= i) {
// 			cout << val;
// 			j = j + 1;
// 			val = val + 1;
// 		}
// 		cout << endl;
// 		i = i + 1;
// 	}
    
//////EVENSUM OR ODDSUM

    // int n;
    // cin>>n;
    // int sumeven = 0, sumodd = 0;
    
    // while(n > 0) {
    //     int last = n % 10;
    //     if(last % 2 == 0) {
    //     	sumeven += last;
    //     }
    //     else {
    //     	sumodd += last;
    //     }
    //     n = n / 10;
    // }
    // cout<<sumeven<<" "<<sumodd;


//////POWER
    // int base,expo;
    // cin >> base >> expo;
    // cout << power(base,expo);
    
/////checking fibbonaci no.
    // int n;
    // cin >> n;
    // if(isfibonacci){

    //         cout <<"Yes";
    //     }
    //     else{
    //         cout << "No";
    // }
     

////   SUM OR PRODUCT     ////
    // int n1;
    // cin >> n1;
    // cout << "Choose b/W 1 means sum and 2 means product" << endl;
    // int n2;
    // cin >> n2;
    // if(n2 == 1){
    //     cout << (n1*(n1+1))/2;
    // }
    // else if(n2 == 2){
    //     cout << factiorial(n1);
    // }
    // else{
    //     cout << -1;
    // }


////// TERMS OF AP //////
    // int n;
    // cin >> n;
    // termsAP(n);

////// REVERSE A No. /////
    // int n;
    // cin >> n;
    // // int result = reverseNo(n);
    // cout << reverseNo(n) ;

///// BINARY TO DECIMAL ////
    // long long n;
    // cin >> n;
    // cout << binaryDecimal(n); 


////  DECIMAL TO BINARY ////
    // int n;
    // cin >> n;
    // cout << decimalBinary(n);


///////// SQUARE ROOT /////
    // int n;
    // cin >> n;
    // cout << power(n,0.5);


    
/////// COUNT /////
    // string ch;
    // cin >> ch;
    // count(ch); 


//// . . . 1
//// . . 1 2
//// . 1 2 3
//// 1 2 3 4

    // int n;
    // cin >> n;
    // for(int i = 1 ;i <= n; i++){

    //     for(int j = n; j >= 1; j--){
    //         if(j>i){
    //             cout << " ";
    //         }
    //         else{
    //             cout << i-j+1;
    //         }
    //     }
    //     cout << endl;
    // }



///////  4444
//////   4444
//////   4444
//////   4444

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << n;
    //     }
    //     cout << endl;
    // }
     

////   4321
////   333
////   22
////   1

    //  int n;
    // cin >> n;
    // for(int i = n ;i >= 1; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    
    
///   1
//    21
///   321
///   4321

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++){
    //     for (int  j = i; j >= 1; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    


////  . . . *
///   . . * * *
///   . * * * * *
///   * * * * * * *

    // int n;
    // cin >> n;
    // for(int i = 1 ;i <= n; i++){
    //     for(int j = n; j >= 1; j--){
    //         if(j>i){
    //             cout << " ";
    //         }
    //         else{
    //             cout <<"*";
    //         }
    //     }
    //     for (int j = 2; j <= i; j++){
    //        cout << "*"; 
    //     }
    //     cout << endl;
    // }

////  . . . 1
//    . . 2 3 2
//    . 3 4 5 4 3
//    4 5 6 7 6 5 4


    int n;
    cin >> n;
    for(int i = 1 ;i <= n/2+1; i++){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
            // else{
            //     cout << j;
            // }
        }
        for (int j = 1; j <= i; j++){
            cout <<i;
        }
        for (int k = 1; i < i; k++){
            cout << 2 * i - 2;
        }
        
        
        // for (int j = 2; j <= i; j++){
        //    cout << "*"; 
        // }
        cout << endl;
    }


///   A
///   BB
///   CCC

    // int n;
    // cin >> n;
    
    return 0;
}