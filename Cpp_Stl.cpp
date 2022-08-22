#include <bits/stdc++.h>
using namespace std;
int main(){
    // vector <int> v={7,9,5,4,6};
    // sort(v.begin(),v.end());
    // for(int i=0; i<5;i++){
    //     cout<<v[i] << " ";
// vector<pair<int,string>> v; //{score,name}


//   sort(v.begin(),v.end());
//  Set :- It is a container which keeps unique copy of every element 
// in sorted order
// Syntax :- set <int> s;
  set <int> s;
  s.insert(14);
  s.insert(45);
  s.insert(34);
   cout<<s.count(14)<<endl;
   cout<<s.count(45)<<endl;
   cout<<s.count(40)<<endl;
   s.erase(45);
   
   cout<<s.count(45)<<endl; 
}
