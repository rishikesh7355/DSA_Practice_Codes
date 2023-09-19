//Time COmplexity :  O(sqrt(N))
//space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cout<<"enter n"<<endl;
   cin>>n;
   int i=1;
   while(i*i<n){
       i++;
   }
   cout<<i-1<<endl;
}