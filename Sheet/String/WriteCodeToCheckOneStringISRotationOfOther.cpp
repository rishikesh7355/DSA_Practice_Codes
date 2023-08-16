//TIne COmplexity : O(N)
//Space complexity : O(N)


//GFG questions name : Check if strings are rotations of each other or not
#include<bits/stdc++.h>
using namespace std;
bool areRotation(string s1, string s2){
     if(s1.length()!=s2.length()){
        return false;
    }
    return (s1+s1).find(s2)!=-1;
}

int main(){
    string s1,s2;
    cout<<"enter two strings "<<endl;
    cin>>s1>>s2;
    if(areRotation(s1,s2)){
        cout<<"true";
    }
    else
        cout<<"false";
}

//first check if both string have euqal length or size or not if yes return false
//then store s1+s1 concatenation in one variable and if s2 is found in concatenation of s1+s1 then return true
//string::npos can also be used it checks till lst whether string is found in another or not 