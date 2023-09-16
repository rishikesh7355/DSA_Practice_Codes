//TIme Complexity : O(|S|)
//Space COmplwxity : O(|S|)
#include<bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cout<<"enter string "<<endl;
   cin>>s;
   string res="";
   for(int i=0;i<s.length();i++){
       if(s[i]!=s[i+1]){
           res+=s[i];
       }
   }
   cout<<res<<endl;
}
///////////////////DRY RUN ////////////////////////
// s=aabb
// a a b b 
// 0 1 2 3
// res=""
// for(int i=0;i<S.length();i++){
//     if s[0]!=s[0+1] ==> a !=a do nothing
//     if s[1]!=s[2] ==> a!=b  res=""+a =a 
//     if S[2]!=S[3] ==> b!=b do nothing
//     S[3]!=S[4] = b != " " S[4] is coming banck space in output  yes res =a+b =ab
// } 