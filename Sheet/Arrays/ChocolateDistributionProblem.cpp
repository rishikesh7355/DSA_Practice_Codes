//TImeCOmplexity : O(nlog(n))
//spaceComplexity : O(1)

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

long long findMinDiff(long long a,long long n,long long m){
    int min_diff = INT_MAX;
    for(long long i=0;i+m-1<n;i++){
        long long diff = a[i+m-1]-a[i];
        if(diff<min_diff)
            min_diff = diff;
    }
    return min_diff;
    
}
int main() {
    vector<long long>a;
    long long n;//chocolates
    cin>>n;
    long long m; //students
    cin>>m;
    n = sizeof(a)/sizeof(int);
    cout<<"enter number of chocolates "<<endl;
    for(long long i=0;i<n;i++){
        a.push_back(a[i]);
    }
    
    int res = findMinDiff(a,n,m);
    cout<<res<<endl;
    
}

///////////////////////////////DRY RUN //////////////////////////////////////////////////
// N = 8 packets, M = 5 students
// A = {3, 4, 1, 9, 56, 7, 9, 12}
//      0  1  2  3   4  5  6  7
// Output: 6
// sort = { 1 3 4 7 9 9 12 56 }
//          0 1 2 3 4 5  6  7
// int min_diff = INT_MAX;
// for(int i=0;i+m-1<n;i++)
// i=0 i+m-1 <n 0+5-1<8 true
//  another variable to store actual  diff 
// 	diff = a[i+m-1]-a[i] a[4]-a[0] =  9-1 = 8 
// 			8<min_diff true
// 		min_diff = 8
// i=1 a[i+m-1]-a[i] = a[1+5-1]-a[1] = a[5]-a[1] = 9-3 = 6  6<8  update min_diff = 6 
// i=2 a[i+m-1]-a[i] = a[2+5-1]-a[2] = a[6]-a[2]= 12  = 6 i++
// i=3 a[i+m-1]-a[i] = a[3+5-1] -a[3] = a[7]-a[3] = 56-7  = 49  49<6 no i++
// for i=4   
// i+m-1 <n  = 4+5-1 <8 exceeded breack return min_diff = 6 answer
