//TImeCOmplexity : O(nlog(n))
//spaceComplexity : O(1)

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

long long findMinDiff(vector<long long> a,long long n,long long m){
    //wihout condition 1 and 2 passing in gfg but we should know the edge cases
    // condition 1 if there are no chocolates or number
    // of students is 0
    if (m == 0 || n == 0)
        return 0;
    sort(a.begin(),a.end());
    // consition 2 Number of students cannot be more than
    // number of packets
    if (m > n ){
        return -1;
    }
 
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
    cout<<"enter value of n "<<endl;
    cin>>n;
    long long m; //students
    cout<<"enter total number of studens m"<<endl;
    cin>>m;
    // n = sizeof(a)/sizeof(int);
    cout<<"enter elemets of chocolates arr"<<endl;
    long long x;
    for(long long i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    
    // int res = findMinDiff(a,n,m);
    // cout<<res<<endl;
    cout<<findMinDiff(a,n,m)<<endl;;
    
}

///////////////////////////////DRY RUN //////////////////////////////////////////////////
// N = 8 packets, M = 5 students
// A = {3, 4, 1, 9, 56, 7, 9, 12}
//      0  1  2  3   4  5  6  7
// Output: 6
// sort = { 1 3 4 7 9 9 12 56 }
//          0 1 2 3 4 5  6  7
// int min_diff = INT_MAX;
//looping till i+m-1 < n is main thing here 
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
