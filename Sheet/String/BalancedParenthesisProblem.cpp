#include <bits/stdc++.h>
using namespace std;

int check(char a,char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    return 0;
}

bool isPar(string s){
    vector<char> c;
    if(s.length()==1){
        return 0;
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            s.push_back(x[i]);
        }
        if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(s.size()==0){
                return 0;
            }
            if(!check(s.back(),s[i])){
                return 0;
            }
            s.pop_back();
        }
    }
    if(s.size()==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    string 
}