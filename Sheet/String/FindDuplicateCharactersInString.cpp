#include <bits/stdc++.h>
using namespace std;

void printDuplicates(string s){
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        //increase the count of charaters s[i] by1  
        mp[s[i]]++;
    }
    for(auto it: mp){
        //if count greater than 1 than its duplicate and print the  2nd value 
        //in map which is frequency if the array 
        if(it.second>1){
            cout<<it.first<< " came "<<it.second<<" times"<<"\n";
        }
    }
}

int main() {
    string s;
    cout<<"Enter string"<<endl;
    cin>>s;
    printDuplicates(s);
}