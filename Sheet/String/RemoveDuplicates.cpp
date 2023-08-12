//Time complexity : O(|S|)
//Space compplexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"enter string to remove duplicates"<<endl;
    cin>>s;
    unordered_set<char> Set;
    string res="";
    for(char c:s){
        if(Set.find(c) == Set.end()){
            Set.insert(c);
            res.push_back(c);
        }
    }
    cout<<res<<endl;
}

////put string in unordered set S and iterate and push_back to another new string res and return  