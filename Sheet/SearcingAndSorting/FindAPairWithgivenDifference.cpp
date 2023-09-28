//time complexity :O(LlogL)
//space complexity: O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
   int arr[]={5, 20, 3, 2, 5, 80};
   int size;
   int n;
   cout<<"enter size and n"<<endl;
   cin>>size>>n;
   sort(arr,arr+size);
   int s=0,e=1;
   while(s<=e and e<=size-1){
       int diff=arr[e]-arr[s];
       if(diff==n){
           cout<<true<<endl;
           break;
       }
       else if(diff>n){
           s++;
       }
       else{
           e++;
       }
   }
   //false coniftion should be given here 
   // other wise it is printing false also along with true
   cout<<false<<endl;;
}

////////////////////////////DRY RUN ////////////////////////////////
// size = 6, N = 78
// arr[] = {5, 20, 3, 2, 5, 80}
// Output: 1

// s=0 e=1
// sort = 2 3 5 5 20 80 
// while(s<=e && e<=size-1)
//  diff=arr[e]-arr[s]
//    diff=3-2=1 ==n no
//  diff>n no e++ e=2
//  diff= arr[2]-arr[0] 5-2 =3 ==n no
// diff >n no e++ e=3
// diff=arr[3]-arr[0] = 5-2 = 3 ==n no
// diff>n no e++ e=4
// diff=arrr[4]-arr[0] = 20-2 =18 ==n no 
// diff>n no e++ e=5 and end<=size-1 i.e 5<=5
// diff = arr[5]-arr[0] =0-2 = 78 ==n true