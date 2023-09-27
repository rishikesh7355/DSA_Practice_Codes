//time complexity : O(n)
//space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,k;
    cout<<"enter n , x and k "<<endl;
    int arr[n];
    cin>>n>>x>>k;
    cout<<"enter arr elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int  i=0;
    while(i<n){
        if(arr[i]==x){
            cout<<i<<endl;
            break;
        }
        i=i+max(1,abs(arr[i]-x)/k);
    }
    cout<<-1<<endl;
}
/////////////////////////////////////////////DRY RUN ////////////////////////////////////////////////
// arr = 4 5 6 7 6 
//       0 1 2 3 4 

// k=1
// x=6
// i=0
// while(i<n)
//  if(arr[0]==x) no
//  i=i+max(1,abs(arr[i]-x)/k)
// 	0+max(1,4-6/2)
// i=1 
// arr[1]==6 no
// i=i+max(1,abs(arr[i]-x)/k)
// i=1+max(1,1/1)
// i=2
// if(arr[2]==6) yes return i = 2