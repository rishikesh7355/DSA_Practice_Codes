//Time complexity: O(n)
//Space complexity : O(1)
using namespace std;
#include <bits/stdc++.h>

int main() {
    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    int n=s.length();
    int res=0,temp=0;
    if(n%2!=0){
        cout<< -1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='{'){
            temp++;
        }
        else{
            if(temp==0){
                res++;
                temp++;
            }
            else{
                temp--;
            }
        }
    }
    if(temp>0){
        res=res+temp/2;
    }
    cout<< res<<endl;
}

//////////////////////////////////////////////DRY RUN ////////////////////////////////////////////

// S = "}{{}}{{{"
// Output: 3

// n = 8
// } { { } } { { {
// 0 1 2 3 4 5 6 7 

// temp=0 , res=0 n%2 == 0
// if s[0] == { no 
// else if(temp==0) yes  res++ temp++ res=1 temp =1
// s[1] == { yes  temp==2 
// s[2] == { yes temp=3 
// s[3] == } else temp==0 no else temp-- temp=2
// s[4] == } else temp==0 no else temp-- temp=1
// s[5] =={ temp++ temp=2 
// s[6] == { temp++ temp=3
// s[7] == { temp++ temp=4
// temp>4
// res=res+temp/2  = 1+4/2 = 1+2 = 3