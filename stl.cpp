#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main(){

    /* // Vector

    vector<int> v;
    vector<int> z(5,1); // (5,1) means size = 5 and initalize with 1
    
    
    cout << " size -> " << v.capacity() << endl;

    v.push_back(1);
    cout << " Capicity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << " Capicity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << " Capicity -> " << v.capacity() << endl;

    v.push_back(4);
    cout << " Capicity -> " << v.capacity() << endl;

    v.push_back(5);
    cout << " Capicity -> " << v.capacity() << endl;
    cout << " size -> " << v.size() << endl;

    cout << " Element at 3rd Index " << v.at(3) << endl;
    
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    //v.pop_back();
    
    // cout << " after pop" << endl;
    for(int i:v){
        cout << i << " ";
    } cout << endl;
    v.erase(v.begin(),v.begin()+2);
    for(int i:v){
        cout << i << " ";
    }

    // Deque

     deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);

    for (int i: d){
        cout << i << " ";
    }
    //d.pop_front();
    cout << endl;
    
    cout << "Print 1st Index Element " << d.at(1) << endl;;
    d.erase(d.begin(),d.begin()+2);
    for (int i: d){
        cout << i << " ";
    }

   // list

   list<int> l;

   list<int> new(l); || list<int> new(5,1);

   l.push_back(1);
   l.push_front(2);
   l.push_front(3);
   l.push_front(4);

   for(int i:l){
    cout << i << " ";
   }
   cout << endl;

   l.erase(l.begin());
   cout << "After erase " << endl;
   for(int i:l){
    cout << i << " ";
   }
   cout << endl;

   cout << "size of list " << l.size();
    

    // Stack

    stack<string> s;
    s.push("Krishna");
    s.push("Kumar");
    s.push("Pal");

    cout << "Top Element " << s.top() << endl;
    cout << "Size of stack " << s.size() << endl;

    
    s.pop();
    //cout << "Top Element " << s.top() << endl;
 
    cout << "size of stack " << s.size() << endl;


   // Queue

    queue<string> q;
    
    q.push("Krishna");
    q.push("Kumar");
    q.push("Pal");

    //cout << "Frist Element " << q.front();

    q.pop();
    cout << "Frist Element " << q.front() << endl;

    cout << "Size after pop " << q.size();

   // priorty Queue

        // Max heap
    priority_queue<int> maxi;

      // Min heap
    priority_queue<int,vector<int>, greater<int> > mini;
  
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size -> " << maxi.size() << endl;
    int n = maxi.size();
    for(int i = 0; i < n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    mini.push(3);
    mini.push(5);
    mini.push(7);
    mini.push(0);

    cout << "Size -> " << mini.size() << endl;
    int m = mini.size();
    for(int i = 0; i < m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;

    // Set

    set<int> s;

    s.insert(5); // complexity of insert -> O(logn)
    s.insert(3);
    s.insert(0);
    s.insert(7);


    for(auto i:s){
        cout << i << " ";
    }cout << endl;

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it); // complexity of erase -> O(logn)
    for(auto i:s){
        cout << i << " ";
    }cout << endl;
 
    cout << "is 5 Present?? " << s.count(5) << endl; //  complexity of count -> O(logn) 
    cout << "is -5 Present?? " << s.count(-5) << endl;

    // set<int> :: iterator itr = s.find(5);
    // cout << "Value at itr -> " << *itr << endl;
    
    set<int> :: iterator itr = s.find(5); // complexity of find -> O(logn)
    for(auto it=itr; it != s.end(); it++){
        cout << *it << " ";
    }cout << endl;

   // Map

   map<int,string> m;

   m[1] = "Krishna";
   m[13] = "Kumar";
   m[2] = "Pal";
   m.insert({5, "Gaurav"});

   for(auto i:m){
    cout << i.first << " " << i.second << endl;;
   }

   cout << "finding 13 -> " << m.count(13) << endl;
   cout << "finding -13 -> " << m.count(-13) << endl;

    cout << "Before erase" << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;;
    }

   // m.erase(13);
   cout << "After erase" << endl;
   for(auto i:m){
        cout << i.first << " " << i.second << endl;;
    }

    auto it = m.find(5);
    // map<int> :: iterator it = m.find(5); not worked
    for(auto i = it; i != m.end(); i++){
        cout << (*i).first << endl;
    }
    */

   // Algorithums

   vector<int> x;

   x.push_back(1);
   x.push_back(2);
   x.push_back(6);
   x.push_back(11);

   cout << "Finding 6 -> " << binary_search(x.begin(),x.end(),6) << endl;
   cout << " lower bound -> " << lower_bound(x.begin(),x.end(),6)-x.begin() << endl;
   cout << " upper bound -> " << upper_bound(x.begin(),x.end(),6)-x.begin() << endl;

   rotate(x.begin(),x.begin()+1,x.end());
   cout << "vector after rotataion " << endl;
   for(int i:x){
        cout << i << " ";
    }cout << endl;

    sort(x.begin(),x.end());  // based on intro sort , made with 3 sorting technique
    cout << "vector after sorting" << endl; // 
    for(int i:x){
        cout << i << " ";
    }cout << endl;


   int a = 3, b = 5;
   cout << "max -> " << max(a,b) << endl;
   cout << "min -> " << min(a,b) << endl;
   swap(a,b);
   cout << "a -> " << a << endl;
   cout << "b -> " << b << endl;

   string s = "abcd";
   reverse(s.begin(),s.end());
   cout << "string -> " << s << endl;





    // int n;
    // cin >> n;
    // int arr[10];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // sort(arr,n);
    // cout << binary_search(arr);


    return 0;
}