//time complexity : O(n2)
//space complexity : O(1)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={5, 1, 3, 4, 7};// {-2,0,1, 3};
    int n,sum;
    cout<<"enter n and sum"<<endl;
    cin>>n>>sum;
    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if((arr[i]+arr[l]+arr[r])>=sum){
                r--;
            }else{
                ans+=(r-l);
                l++;
            }
        }
    }
    cout<<ans<<endl;
}

////////////////////////////////////////DRY RUN /////////////////////////////

// Input: N = 4, sum = 2
// arr[] = {-2, 0, 1, 3}

// sorted = -2 0 1 3 
//           0 1 2 3 
// ans=0
// l=i+1 r=n-1
// for i=0 i<n-2=2 i++
// while(l<r)
// 	i=0 l=1 r=3 l<r
// 	if((arr[i]+arr[l]+arr[r])>=sum)
// 	arr[0]+arr[1]+arr[3])>=sum) = -2+0+3 = 1 >=2 no
// 	else
//        ans= 0+3-1 ans =2
// 	l++ l=2
// 	i=0,l=2,r=3 l<r
// 	arr[0]+arr[2]+arr[3])>=sum = -2+1+3 = 2 >=2
// 	yes r-- r=2
// 	now l=2 r=2 l<2 no ans =2 final 
// -----------------------------------------------------------------------------------------------------------------------------------
// Input: N = 5, sum = 12
// arr[] = {5, 1, 3, 4, 7}
// Output: 4

// sort  = 1 3 4 5 7 
//         0 1 2 3 4 
// int ans=0
// for i=0 i<n-2 i++ 
// corner points 
// 	l=i+1 r=n-1 = 4
// 	while(l<r)
// 		//do not go out of while loop until l<r
//  		if(arr[i] + arr[l]+arr[r] >=sum)
//   			i=0 , l=1,r=4
//                arr[0]+arr[1]+arr[4]>=12
// 				11>=12 no
// 		    else 
//  			l++ l=2
//  			ans=ans+r-l = 0+4-1 =3
// 			    ans=3
// 		    i=0 l=2 r=4 l<r
//   		if(arr[i] + arr[l]+arr[r] >=sum)
// 			arr[0]+arr[2]+arr[4] = 1+4+7 12 >=12 yes
// 				r-- r=3
// 		    i=0 l=2 r=3 l<r
// 		    if(arr[0] + arr[2]+arr[3] >=sum)
// 				1+4+5 >=12 no
            // else 
            // ans=ans+(r-l)  = 3+ (3-2)
            // ans=4
            // l++ l=3
            // l<r no ans =4 

