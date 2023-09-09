//time complexity : O(n)
//space complexity : O(n)
//n = length of string
#include <bits/stdc++.h>
using namespace std;

//ASCII  A-Z = 65 to 90
//a-z = 97 to 122

//code not working for string with space in programmiz
//S = "HEY U"
// Output: 4433999088
string mobileEq(string arr[],string input){
    int n = input.length();
    string output = "";
    for(int i=0;i<n;i++){
       if(input[i]== ' '){
           output=output+'0';
       }
       else{
           int position = input[i]-'A';
           output = output+arr[position];
       }
   }
   return output;
}
int main() {
   string s;
   cout<<"enter string "<<endl;
   cin>>s;
   string str[] = 
   {"2","22","222","3","33","333","4","44","444","5","55","555",
   "6","66","666","7","77","777","7777","8","88","888",
   "9","99","999","9999"};
   
   cout<<mobileEq(str,s)<<endl;
}

/////////////////////////////////////////////DRY RUN ///////////////////////////
// S = "GFG"
// Output: 43334

// n = 3
// string str[]
//         = { "2",   "22",  "222", "3",   "33",   "333", "4",
//             "44",  "444", "5",   "55",  "555",  "6",   "66",
//             "666", "7",   "77",  "777", "7777", "8",   "88",
//             "888", "9",   "99",  "999", "9999" };

// for(int i=0;i<n;i++)
// i=0 S[0]==' ' no
// else pos = S[0] - 'A' => G-A = 71-65  = 6
// output = ""+str[pos]==> ""+str[6] ==> 4

// i=1 else pos =  S[1]-'A' = F-A = 70-65 = 5
// ouput = output+Str[pos] = 4+str[5] = 4333

// i=2 else pos = S[2] -'A'  =G-A =  71 - 65 =6
// output = 4333+ str[6] = 43334
