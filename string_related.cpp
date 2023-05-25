#include<bits/stdc++.h>
using namespace std;

// \o -> Null character ASCII value = 0;

int getLength(char name[]){
    int count = 0;
    for (int i = 0; i < name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverseString(char name[], int n){
    int s = 0;
    int e = n-1;
    while (s < e){
        swap(name[s++], name[e--]);
    }
}

char toLowerCase(char name[], int n){
    for (int i = 0; i < n; i++){
        if (name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i] - 'A' + 'a';
        }
    }
    return 0;
}

char toLowercase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isValide(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

bool checkPalandrome(char name[],int n){

    // string temp = " ";
    // for (int j = 0; j < n; j++){
    //     if (isValide(name[j])){
    //         temp.push_back(name[j]);
    //     }
    // }
    

    int end = n - 1;
    for (int i = 0; i < (n+1)/2; i++){
        if (toLowercase(name[i]) != toLowercase(name[end])){
            return 0;
        }
        end--;
    }
    return 1;
}

char getMaxCharacter(string s){
    int arr[26] = {0};
    
    // Create aa array of counting character
    for (int i = 0; i < s.length(); i++){
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){ // Lower case
            number = ch -'a';
        }
        else{/// Upper Case
            number = ch - 'A';
        }
        arr[number]++;
    }
    // find maximum occ character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26 ; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char  finalAns = 'a' + ans;
    return finalAns;
}

string replaceSpaces(string &str){
    string temp = "";

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int compress(vector<char> & chars){
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    while (i < n){
        int j = i + 1;
        while (j < n && chars[i] == chars[j]){
            j++;
        }
        // yaha kab aaoge
        // ya toh vector poora traverse krdia
        // ya fer new/Different character encounter kia hai
        
        // oldChar store karlo 
        chars[ansIndex++] = chars[i];

        int count = j - i;

        if(count > 1){
            // converting counting 
            string cnt = to_string(count);

        }
        
    }
}


int main(){
    /*
    char name[15];

    cout << "Enter your name :- ";
    cin >> name;

    // name[2] = '\0';
    cout << "Your name is :- ";
    cout << name << endl;

    int key = getLength(name);
    cout << key << endl;

    reverseString(name, key);
    cout << "Reverrse :- ";
    cout << name << endl;

    toLowerCase(name, key);
    cout << "After converting into small letters :- " << name << endl;

    cout << "Palandrome or Not :- " << checkPalandrome(name,key) << endl;
    */
    
    // Max character in a string

    // string s;
    // cin >> s;
    // cout << getMaxCharacter(s) << endl;



    
    return 0;
}