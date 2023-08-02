///TimeComplexity : logbase2(2^32) * Col * logbase2 Row
                    // = O(32 * N * logbase2*Row) 
//space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int countLessThanEqualTomid(vector<int>&row,int mid){
    //binary search on singlw rows
    int l = 0; int h = row.size()-1;
    while(l<=h){
        int m = (l+h)>>1;
        if(row[m]<=mid){
            l = m+1;
        }
        else{
            h = m-1;
        }
    }
    return l;
}
int median(vector<vector<int>>&matrix , int r,  int c){
  int low = 1;int high = 1e9;
  while(low<=high){
    int count = 0;
    int mid = low+high>>1;//right shift by 1 means dividing by two
    cout<<mid<<endl;
    for(int i=0;i<=r;i++){
        count+=countLessThanEqualTomid(matrix[i],mid);
    }
    if(count<=(r*c)/2){
        low = mid+1;
    }
    else{
        high = mid+1;
    }
  }
  return low;
}

int main() {
  int r,c;
  cout<<"enter rows"<<endl;
  cin>>r;
  cout<<"enter columns"<<endl;
  cin>>c;
  // cout<<"enter matrix elements"<<endl;
  vector<vector<int>> matrix = {{1, 3, 8},
                                {2, 3, 4},
                                {1, 2, 5}};
  // (r,vector<int>(c));
//   for(int i=0;i<r;++i){
//       for(int j=0;i<c;++j){
//           cin>>matrix[i][j];
//       }
//   }
  int res = median(matrix,r,c);
  cout<<res;
}


///////////////////////////////////////// DRY RUN not working return 6 instead of 5 ////////////////////////////////////////////
// R = 3, C = 3
// M = [[1, 3, 5], 
//      [2, 6, 9], 
//      [3, 6, 9]]
// Output: 5
// Explanation: Sorting matrix elements gives 
// us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 

// low = 1 high = 1e9  = 2^32 
// mid = low+high>>1  = 1+2^32/2 or here 9+1/2 ==5;
// while(low<=high)
// for( int i=0;i<=R;i++)
// i=0 count+= countLessThanEqMidFunction(matrix[0],5) 
// matrix[0] means row 1
// inside countLessThanEqMidFunction(1 3 5 , mid)
//      row = [1 3 5 ]
//      l = 0;
//      h = row.size()-1 = 3-1 =2
//      while(l<=h)
//      m = 0+2/2 = 1
//      if(row[1]<=mid)  = 3<=5 yes l = m+1 l= 1  h = 2 
//      m = 1+2/2 = 3/2 =1 again
//      and row[1]<=mid  = 3<=5 yes l = m+1 l=2 h = 2
//      m = 4/2 = 2 
//      if(row[2]<=mid) 5<=5 yes l=m+1 l = 3 
//      now l>h break
//      l = 3 in row 1 or matrix[0]  
//      count = count+countLessThanEqMidFunction(matrix[0],mid)
//      count = 0+3 = 3
//      if(count<=(r*c)/2) 3<=9/2 3<=4  yes so  low = mid+1  low = 5+1 = 6

//      again to while loop low = 6 high = 9 mid = 15/2 = 7
//      for loop  i=1 now
//      count+=countLessThanEqMidFunction(matrix[1],mid)
//             = countLessThanEqMidFunction([2 6 9], 7)
//           inside function 
//           l = 0 h = 3-1 = 2 m = 2/2 = 1
//           if(row[m]<mid) row[1]<7 6<=7 yes l = m+1 l = 1
//           row[1]<=mid  6<=7 yes l = m+1 l=2 h=2

//           l=2 h=2 m = 4/2 = 2 and l<=h 2<=2
//           if row[m]<=mid row[2]<=7  9<=7 no h= mid-1 h=6
//           l=2 h=6 m = 4 
//           if row[m]<=mid = row[4] we dont have so return l = 2 to count
//      count = count + countLessThanEqMidFunction(matric[1],7)
//      count = 3+2 = 5
//      if(count<=(r*c}/2)) = 5<=9/2  = 5<=4 no high = mid-1 high = 6 low = 6 same 
//      again while loop  low<=high 6<=6 
//      R = 3 i = 2  i<R 
//      now i = 2
//      mid = 6+6/2 = 6
//      count+ =countLessThanEqMidFunction(matrix[2],6)
//           inside countLessThanEqMidFunction(3 6 9 ) function
//           l = 0 h = 3-1 = 2 m = 2/2 = 1 mid = 6
//           if(row[m]<=mid) = row[2]<=6  6<=6 yes l = m+1  = 1
//           m = 1+2/2 = 1
//           if(row[m]<=mid) = row[1]<=6  6<=6 yes l = m+1 l=2
//           m = 2+2/2 = 2
//           row[2]<=6 9<=6 no m h = m-1  h = 5
//           m = 2+5/2 = 3
//           row[3] <=mid not possible we donot have row[3] 
//           return l = 2
//      count = count+ 2 = 5+2 = 7
//      7<=(r*c)/2  7<=4 no high = mid-1    high  = 5 low = same 6  low<=high no break
//      return low = 6