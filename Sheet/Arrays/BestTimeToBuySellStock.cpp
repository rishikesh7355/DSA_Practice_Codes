#include <iostream>
using namespace std;

int main() {
    int arr[5];
   int n = sizeof(arr)/sizeof(int);
   cout<<"enter elements"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int maxRight = arr[n-1];
   int maxProfit = 0;
   for(int i=n-2;i>=0;i--){
       maxRight = max(arr[i],maxRight);
       maxProfit = max(maxProfit,maxRight-arr[i]);
   }
   cout<< maxProfit<<endl;;
}

///////////////////////////////////Dry RUn / ///////////////////////////////////////////////////////
/*
n = 6
prices = 7 1 5 3 6 4 
maxRight = 4
maxProfit = 0
loop 
i=n-2 = 4
maxRight = max(6,4) = 6
maxPofit = max(0,4-6) =  0

i=5-2= 3
maxRight = max(6,arr[3]) = 6
maxProfit = max(0,6-3) = 3

i=4-2 = 2
maxRight = max(6,  5)  = 6
maxProfit = max(3,6-5) = 3

i=3-2 = 1
maxRight= max(6,1)  = 6
maxProfit = max(3,6-1) = 5

i=2-2 = 0
maxRight  = max(6,7) = 7
maxPRofit = max(5 , 7-7)  = 5
answer final is 5
*/