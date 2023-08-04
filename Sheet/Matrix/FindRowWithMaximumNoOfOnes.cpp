//time complexity : O(N+M)
//space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> arr,int n, int m){
    int max_row_idx = 0;
    int j = m-1;
    for(int i=0;i<n;i++){
        bool flag = false;
        while(j>=0 && arr[i][j]==1){
            j = j-1;
            flag = true;
        }
        if(flag){
            max_row_idx = i;
        }
    }
    if(max_row_idx ==0 && arr[0][m-1]==0){
        return -1;
    }
    return max_row_idx;
}

int main() {
    int n,m;
    cout<<"enter row and columns "<<endl;
    cin>>n>>m;
    cout<<"enter matrix elements"<<endl;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<rowWithMax1s(arr,n,m);
}
/////////////////////////////////////////DRY RUN ////////////////////////////////
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},           
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
//here we check the last column if it is 1 than we dont check further values in same column
//we come to next row and check element more left than previous one
//so we do not need to iterate over every element 

// 0   1  1 | 1 
// 	    ----
// 0   0 |1  1
//       ----
// 0  |1  1  1
//    ---- 
// |1  1  1  1
// ----
// 0   0  0  0 

// 0 1 1 1 0 0 1 1 1 1 1 1 0 0 0 0 test case for checking answer
// int max_row_idx = 0
// int j = m-1 = 3
// for(int i=0;i<n;i++){
// 	//start from leftmost col and keeping moving left 
//  	bool flag =false //to check if row has more 1s than preious
// 	while(j>=0 && arr[i][j] ==1) 
// 	3>=0 i-0 arr[0][3]==1 yes j=j-1 j = 2 flag = true max_row_idx =i= 0 
// 	i=1 2>=0 && arr[1][2]==1 yes j=j-1 j = 1 flag = true max_row_idx = 1
// 	i=3 1>=0 && arr[2][1]==1 yes j=j-1 j=0 flag  =true max_row_idx = i=2
// 	i=4 i>n breack return max_row_idx = 2 ans 