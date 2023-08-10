//TIme complexity : O(S)
//Space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str ;
    cout<<"enter string"<<endl;
    cin>>str;
    int s=0;
    int e = str.length()-1;
    string original = str;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    if(original == str) cout<< 1;
    else cout<< 0;
   
    
}