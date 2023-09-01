//time complexity : O(s.length())
//space complexity : O(no of diff characters)
#include <bits/stdc++.h>
using namespace std;

bool checkIsomorph(string s1, string s2){
    int l1 = s1.length();
    int l2 = s2.length();
    if(l1!=l2) return false;
    
    int m1[256] = {0};
    int m2[256] = {0};
    
    for(int i=0;i<l1;i++){
        if(!m1[s1[i]] and !m2[s2[i]]){//these are first occurrences not presnt in maps m1 and m2 so map m1 to m2 and vice versa
            m1[s1[i]] = s2[i];
            m2[s2[i]] = s1[i];
        }
        else if(m1[s1[i]] !=s2[i]){ //hash of m1[s1[i]] not in s2[i]
            return false;
        }
    }
    return true;
}

int main() {
    string str1,str2;
    cout<<"enter strings s1 and s2"<<endl;
    cin>>str1>>str2;
    cout<< checkIsomorph(str1, str2);
}