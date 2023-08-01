///TimeComplexity : logbase2(2^32) * Col * logbase2 Row
                     = O(32 * N * logbase2*Row) 
//space complexity : O(1)


R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]
Output: 5
Explanation: Sorting matrix elements gives 
us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 

low = 1 high = 1e9  = 2^32 
mid = low+high>>1  = 1+2^32/2;
while(low<=high)
for( int i=0;i<=R;i++)
i=0 count+= countLessThanEqMidFunction(matrix[0],mid) 
matrix[0] means row 1
inside countLessThanEqMidFunction(1 3 5 , mid)
row = [1 3 5 ]
l = 0;
h = row.size()-1 = 3-1 =2
while(l<=h)
m = 0+2/2 = 1
if(row[1]<=mid)  = 3<=mid yes l = m+1 l= 2  h = 2 
m = 2+2/2 = 4/2 =2
if(row[2]<=mid) =5<=mid yes l=m+1 l = 3 
now l>h break
l = 3 in row 1 or matrix[0]  