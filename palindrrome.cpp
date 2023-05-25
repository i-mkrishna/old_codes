#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int i, int j){
    
    if(i>j){ //Base case
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
    // return str;
}

bool checkPelindrome(string& str, int i,int j){

    // Base case 
    if(i>j){
        return 1;
    }
    if(str[i]!=str[j]){
        return 0;
    }
    else{
        return checkPelindrome(str,i+1,j-1);
    }
}

int power(int a,int b){

    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = power(a,b/2);
    //if b is even
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main(){
    /*
    string name = "plmnjiuhb";
    // cin >> name;
    reverse(name,0,name.length()-1);
    cout << name << endl;
    */
   /*
   string name = "mnbbnm";
   bool isPalindrome = checkPelindrome(name,0,name.length()-1);
   cout << isPalindrome << endl;
   */
   
   int a,b;
   cin >> a >> b;
   int ans = power(a,b);
   cout << "Answer is -> " << ans << endl;



    return 0;
}