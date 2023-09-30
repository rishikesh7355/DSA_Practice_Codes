//Time complexity : O(n)
//space complexity : O(1)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={6,5,5,7,4};
    int n;
    cout<<"enter n "<<endl;
    cin>>n;
    int sum=0,ans=arr[0];
    for(int i=1;i<n;i++){
        int temp=max(sum+arr[i],ans);
        sum =ans;
        ans=temp;
    }
    cout<<ans<<endl;;
}
 ///////////////////////dry run //////////////////////////
        // arr =  6 5 5 7 4 
        // ans=arr[0] sum=0
        // i=1 temp = =max(sum+arr[1],ans) = max=(0+5,6) temp=6
        // sum=ans=6 ans=temp = 6
        // i=2 temp=max(sum+arr[2],ans) == max(11,6) temp=11
        // sum=ans=6 ans=11
        // i=3 temp=max(sum+arr[3],ans) = max(13,11) temp=13
        // sum=ans=11 ans=temp=13
        // i=4 temp=max(sum+arr[4],ans)=max(15,13) temp=15
        // sum=ans=13 temp=ans=15