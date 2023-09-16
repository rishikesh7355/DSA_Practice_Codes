//Time Complexity : O(|S|)
//Space Complexiy : O(1)

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cout<<"enter binary string"<<endl;
    cin>>s;
    int cnt0=0,cnt1=0;
    for(int i=0;i<s.length();i++){
        char charToAccept = i%2==0?'0':'1';
        if(s[i]!=charToAccept){
            cnt0++;
        }
        else{
            cnt1++;
        }
    }
    cout<<min(cnt0,cnt1)<<endl;
}

///////////////////////////////////////////Dry RUN //////////////////////////////////////////////////////////
// S = "0001010111" 
// Output: 2


// 0 0 0 1 0 1 0 1 1 1
// 0 1 2 3 4 5 6 7 8 9 
// c0=0 c1=0
// charToAccept = i%2==0?0:1
// for(int i=0;i<S.length();i++)
// if(S[i]!=CharToAccept)
// i=0 0%2==0 yes 0
// S[0]!=0 no 
// else c1++ c1=1
// i=1 1%2==0 no 1
// if(S[1]!=1 yes  c0=1
// i=2 2%2==0 yes  0
// S[2]!=0 no 
// else c1+= c1=2
// i=3 3%2==0 no 1
// S[3]!=1 no
// else c1=3
// i=4 4%2==0 yes 0
// S[4]!=0 no
// c1=4
// i=5 5%2==0 no 1
// S[5]!=1 no
// c1=5
// i=6 6%2==0 yyes 0
// S[6]!=0 no
// c1=6
// i=7 &%2==0 no 1
// s[7]!=1 no
// c1=7
// i=8 8%2==0 yes 0
// S[8]!=0 yes c0=2
// i=9 (%2==0 no 1
// S[9]!=1 no
// c1=8
// min(c0,c1)
// c0 =2 answer