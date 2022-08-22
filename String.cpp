#include <bits/stdc++.h>
using namespace std;
int main(){
    string  s1="apnikasha";
    // // s1.erase(4,3); 
    // s1.insert(9,"ByAman");
    // cout<<s1.size();
    // for(int i=0;i<s1.size();i++){
    //     cout<<s1[i]<<endl;
    // sort(s1.begin(),s1.end());
    // cout<<s1<<endl;
    // To convert String to upperCase
//    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
//     cout<<s1<<endl;
//     // To convert into LowerCase
//     transform(s1.begin(),s1.end(),s1.begin(),::tolower);
//     cout<<s1;
// string s2="59418781545";
// sort(s2.begin(),s2.end(),greater<int>());
// cout<<s2;
// Problem ->> find out the maximum occurence of character in the string
    string s="fjgaygiekjoiyuyubbcsdd";
    int freq[26];
    for(int i=0;i<26;i++)
          freq[i]=0;
    for(int i= 0;i<s.size();i++)
    freq[s[i]-'a']++;
    char ans='a';
    int maxF=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';
            
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    }
