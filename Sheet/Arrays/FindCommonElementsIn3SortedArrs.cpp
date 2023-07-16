//time and space complexcity O(n1 + n2 + n3)

////////////////////////////////       DRY RUN      ///////////////////////////////////////
//  int n1 = 7; 
//   int n2 = 6; 
//   int n3 = 9;   
// int A[] = { 1, 5, 10, 20, 40, 80, 80 };
// int B[] = { 6, 7, 20, 80, 80, 100 };
// int C[] = { 3, 4, 15, 20, 30, 70, 80, 80, 120 };
// i = j = k = 0
// prev1 = prev2 = pev3 = INTMIN 

// while(0<7  0<6 0<9)
// i=0 A[0]><B[0] prev1 = 1  1 6 3 1 is smallest incremnt i 
// i = 1 A[1]  < B[0] prev1 = 5  5 6 3 3 is smallest increamnt k prev3 = 3
// k  = 1 5 6 4 4 smalelest prev3 = 4 k++
// k=2 5 6 15 i++ prev1 = 5 
// i=2 10 6 15 j++ prev2 = 6 
// j = 1 10 7 15  j++ prev2 = 7 
// j=2 10 20 15 i++ prev1 10 
// i=3 20 20 15 k++ prev3 = 15
// k = 3 20 20 20 i++ j++ k ++ prev1 = 20 prev2 = 20 prev3 = 20 ;
// i=4
// j=3
// k=4
//  40 80 30 k++ prev3 = 30 
// k = 5
// 40 80 70 i++ prev1 = 40 
// i=5 80 80 70 k++ prev3 = 70 
// k=6 80 80 80 prev1 = pev1 = prev3 = 80 
// i = 6 j = 4 k = 6
// 80 80 80 i++ but i finished cannot be more common stop 
 
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

void getcommonElements(int A[],int B[],int C[],int n1,int n2,int n3){
      int prev1, prev2, prev3 ;
    prev1 = prev2=prev3 = INT_MIN;
    int i = 0,j=0,k=0;
    while(i<n1 && j<n2 && k <n3 ){
        while(A[i]==prev1 && i<n1)
            i++;
        while(B[i] == prev2 && j<n2)
            j++;
        while(C[k] == prev3 && k<n3)
            k++;
        if(A[i] == B[j] && B[j]==C[k]){
            cout<<A[i]<<' ';
            prev1 = A[i]; i++;
            prev2 = B[j]; j++;
            prev3 = C[k]; k++;
        }
        else if(A[i]<B[j]){
            prev1 =A[i];
            i++;
        }
        else if(B[j]<C[k]){
            prev2 = B[j];
            j++;
        }
        else{
            prev3 = C[k];
            k++;
        }
    }
}
int main() {
    int n1 = 7; 
    int n2 = 6; 
    int n3 = 9;
    int A[] = { 1, 5, 10, 20, 40, 80, 80 };
    int B[] = { 6, 7, 20, 80, 80, 100 };
    int C[] = { 3, 4, 15, 20, 30, 70, 80, 80, 120 };
    getcommonElements(A,B,C,n1,n2,n3);
    // return 0;
  
}