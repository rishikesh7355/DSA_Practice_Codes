//time complexity : O(n)
//space complexity : O(1)
#include <bits/stdc++.h>
using namespace std;

int transform(string A , string B){
    int n = A.length();
    int m= B.length();
    if(n!=m) return -1;
    
    //define a count array to count the frequency of characters
    //we can use memset also 
    int count[256] = {0};
    //memset(count,0,sizeof(count));
    //this part check conversion is possible or not by counting each frequecy in 
    // A and then decreasing in B and comapring if they are 0 or not 
    
    //count characters in A
    for(int i=0;i<n;i++){
        count[A[i]]++;
    }
    //now subtract those from B this confirms they have the same characters
    for(int i=0;i<n;i++){
        count[B[i]]--;
    }
    //check if all count is 0
    for(int i=0;i<256;i++){
        if(count[i]) return -1;
    }
    //below codes check the number of operations required
    int i=n-1,j=n-1;
    int res=0;
    while(i>=0 && j>=0){
        while(i>=0 && A[i] !=B[j]){
            res++;
            i--;
        }
        i--;
        j--;
    }
    return res;
}

int main() {
    string s1 ,s2;
    cout<<"enter strings to convert"<<endl;
    cin>>s1>>s2;
    cout<<transform(s1,s2);
}