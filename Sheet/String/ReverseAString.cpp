//Time Coplexity : O(S)
//Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str ;
    cout<<"enter string"<<endl;
    cin>>str;
    int s=0;
    int e = str.length()-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    cout<<str<<endl;
    
}

/////////////////////////////////////////DRY RUN  //////////////////////////////
// s = Geeks
// Output: skeeG

// start = 0;
// end = s.size()-1  = 5-1 = 4
// while(s<e) swap(s[start++],s[end--]) start 0 end 4
// G <==>s  sG start 1 end 3 
//  e <==> k  skeG start2 end 2 
//  e <==> e skeeG