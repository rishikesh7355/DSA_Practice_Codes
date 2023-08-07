//TIme COmplexity : O(n^2)
//Space complexity : O(1)

#include<bits/stdc++.h>
using namespace std;
void  rotate90(vector<vector<int>>mat, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    reverse(mat.begin(),mat.end());
    
    //either print the matrix here or in the main funtion after cakking this fn
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    vector<vector<int>> mat =  {{1, 2},
                                {3, 4}};
    // {{1, 2, 3},
    //                                 {4, 5, 6},
    //                                 {7, 8, 9}};
    rotate90(mat,n);
    
}

//////////////////////////////////////DRY RUN not working /////////////////////////////////////////////
N = 3 
matrix[][] = {{1, 2, 3},
              {4, 5, 6}
              {7, 8, 9}}
Output: 
Rotated Matrix:
3 6 9
2 5 8
1 4 7

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        swap(mat[i][j],mat[j][i])
    }
}
reverse(matrix.begin(),matrix.end());
i=0 j=1 swap(mat[0][1],mat[1][0]) 
1 4 3 
2 5 6
7 8 9 
i=1 j = 2 swap(mat[1][2],mat[2][1]) 
1 4 3 
2 7 6 
5 8 9 
i=2 j  = 3 j<N no  final 1 4 3 2 7 6 5 8 9  reverse 9 8 5 6 7 2 3 4 1 3

