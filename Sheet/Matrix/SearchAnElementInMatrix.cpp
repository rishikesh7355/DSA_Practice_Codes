//time complexity : O(N+M)
//space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

bool searchElement(vector<vector<int>> mat,int r ,int c ,int x ){
    int rowIndex = 0;
    int colIndex = c-1;
    while(rowIndex < r && colIndex >=0){
        int element = mat[rowIndex][colIndex];
        if(element == x){
            return 1;
        }
        else if(element < x){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
}

int main() {
   int r,c ,x;
   cout<<"enter row and col "<<endl;
   cin>>r>>c;
   cout<<"enter target element to find"<<endl;
   cin>>x;
   vector<vector<int>> mat = {{ 3, 30, 38},
              {36, 43, 60},
              {40, 51, 69}};

    int res = searchElement(mat, r,c,x );
    if(res){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"Not found";
    }
}




//////////////////////////////////////// DRY RUN ///////////////////////////////////////////
// n = 3, m = 3, x = 62
// matrix[][] = {{ 3, 30, 38},
//               {36, 43, 60},
//               {40, 51, 69}}
// Output: 0
// rowIndex = 0
// colIndex = m-1 = 2
// while(rowIndex < n && colIndex>=0 )
//     element = mat[rowIndex][colIndex] = mat[0][2] = 38 
//     element < x 38 < 62  rowindex ++   rowINdex = 1
//     element = mat[1][2] = 60 <62 rowINdex++ rowINdex = 2
//     element = mat[2][2]  = 69 >62 colIndex-- colIndex = 1
//     element = mat[2][1] = 51 < 62 rowINdex++  = 3 
//     next step not possible return 0  because rowINdex should be less than n 

// n = 1, m = 6, x = 55
// matrix[][] = {{18, 21, 27, 38, 55, 67}}
// Output: 1
// rowINdex = 0 colINdex = 5
// while(rowindex < 1 && colINdex>=0)
// element = mat[0][5] = 67 67 >55  colINdex--  = 4
// element  = mat[0][4] = 55 == 55 return 0 
