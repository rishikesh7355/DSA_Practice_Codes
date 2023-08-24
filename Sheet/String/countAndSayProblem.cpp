#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n){
    string ans="1";
    for(int i=2;i<=n;i++){
        string s=ans;
        string str="";
        int cnt=1;
        int j;
        for(int j=1;j<s.size();j++){
            if(s[j]==s[j-1]){
                cnt++;
            }
            else{
                str+=to_string(cnt)+s[j-1];
                cnt=1;//resetting count to 1 again as it start from new char
            }
        }
        str+=to_string(cnt)+s[j-1];
        ans=str;
    }
    return ans;
}

int main() {
    
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    countAndSay(n);
}