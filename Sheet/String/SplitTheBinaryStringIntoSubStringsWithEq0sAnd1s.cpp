//TimeComplexity : O(n)
//Space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int balacedBinaryPair(string s){
    int count0=0,count1=0,pairCount=0;
   for(int i=0;i<s.length();i++){
       if(s[i]=='0'){
           count0++;
       } else {
           count1++;
       }
       if(count0==count1){
           pairCount++;
       }
   }
   if(count0!=count1){
       return -1;
   }
   return pairCount;
}

int main() {
   string s;
   cout<<"enter a binary string"<<endl;
   cin>>s;
  int res = balacedBinaryPair(s);
  cout<<res<<endl;
}