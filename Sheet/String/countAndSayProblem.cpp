#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n){
    string ans="1";
    for(int i=2;i<=n;i++){
        string s=ans;
        string str="";
        int cnt=1;
        int j;
        for(j=1;j<s.size();j++){
            if(s[j]==s[j-1]){
                cnt++;
            }
            else{
                str+=to_string(cnt)+s[j-1];
                cnt=1;//resetting count to 1 again as it start from new character
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
    string res = countAndSay(n);
    cout<<res<<endl;
}
/////////////////////////////////////////DRY RUN confused in n=3 and 4 /////////////////////////////////////
// n=4
// n=1 return ans = "1"
// n=2 for(int i=2;i<=n;i++) 
//     s=ans ==> "1"
//     str = ""
//     cnt=1
//     int j
//     for(j=1;j<s.size();j++) i.e 1<1 no 
//     so go outside for loop 
//     str= str+to_string(count)+s[j-1]
//     str=""+"1"+s[0] ==> ""+1+1
//     ans=str="11"
// n=3 inside 2nd for loop for(j=1;j<s.size();j++) 
//         if s[j]==s[j-1] ==> s[1]==s[0] 1==1 yes cnt++ i.e=2
//         str=str+to_string(count)+s[j-1]
//             ""+to_string(2)+s[0]  ==> "21"
// n=4 now j=2 i=4 no 2nd for loop as j=2 now and j<s.size() no 2<2
        
