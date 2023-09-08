//Time complexity : O(|S|^2)
//space complexity : O(1)
#include <bits/stdc++.h>
using namespace std;

string longestPalin(string str){
    int n=str.length();
    int s=0,e=0,maxlen=1;
    //odd length
    for(int i=0;i<n;i++){
        int l=i,r=i;
        while(l>=0 && r<n){
            if(str[l]!=str[r]){
                break;
            }
            l--;
            r++;
        }
        int len=r-l-1;
        if(len>maxlen){
            maxlen=len;
            s=l+1;
            e=r-1;
        }
    }
    //even length
    for(int i=0;i<n;i++){
        int l=i,r=i+1;
        while(l>=0 && r<n){
            if(str[l]!=str[r]){
                break;
            }
            l--;
            r++;
        }
        int len=r-l-1;
        if(len>maxlen){
            maxlen=len;
            s=l+1;
            e=r-1;
        }
    }
    return str.substr(s,maxlen);
}
int main() {
   string S;
   cout<<"enter string"<<endl;
   cin>>S;
   cout<<longestPalin(S);
}