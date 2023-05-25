#include<iostream>
#include<cmath>
using namespace std;


void termsAP(int x){
    int _ap[1000];
    int lastTerm = 3 * x +2;
    for(int i = 1; i <= lastTerm; i++){
        _ap[i] = 3 * i + 2;
    }
    for(int i = 0; i < x; i++){
        if(_ap[i]%4 != 0){
            cout << _ap[i] << " ";
        }
    }
}

void count(string ch){
    int character = 0, numbers = 0, spaces = 0;
    for(int i = 0; i < ch.length(); i++){
        if( (ch[i] >= 'a' && ch[i] <= 'z' ) || (ch[i] >= 'A' && ch[i] <= 'Z') ){
            character++;
        }
        else if(ch[i] >= '0' && ch[i] <= 'Z'){
            numbers++;
        }
        else{
            spaces++;
        }
        
    }
    cout << character << " " << numbers << " " << spaces;
}

int pairSum(int arr[],int size, int sum){
    int pair = 0;
    for (int  i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i != j){
                if(sum == arr[i]+arr[j]){
                    pair++;
                }
            }
        }
    }
    return pair;
}

int main(){
/*
////// TERMS OF AP //////
   int n;
   cin >> n;
   termsAP(n);

/////// COUNT /////
   string ch;
   cin >> ch;
   count(ch); 


///// pairSum 
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++){
        cin >> arr[i];
   }
   int sum;
   cin >> sum;
   cout << pairSum(arr,n,sum); */

   char arr[5];
   for (int i = 0; i < 5; i++){
    cin >> arr[i];
   }
   cout << arr << endl;
   string name;
   cin >> name;
   cout << "name :- " << name << endl;
//    for (int i = 0; i < 5; i++)
//    {
//     /* code */
//    }
   
   
   return 0;
}