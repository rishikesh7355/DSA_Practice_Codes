// Time Complexity:O(N2LogN)
// Auxillary Space:O(N2)
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sortedMatrix(vector<vector<int>> arr,int n){
    int temp[n*n];
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++,s++){
            temp[s] = arr[i][j];
        }
    }
    sort(temp,temp+s);
    s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++,s++){
            arr[i][j] = temp[s];
        }
    }
    return arr;
}

int main() {
    int n;
    cout<<"enter n for row col"<<endl;
    cin>>n;
    cout<<"enter matrix elements"<<endl;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    arr =sortedMatrix(arr,n);
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

////////////////////////Dry RUN /////////////
//main login is in s only put in both loop and s++
// take a temporary array temp of size n*n and integer s
// loop and store all emelents in temp while increasing s also
// sort temp till temp+s
// again loop to put back all elements from temp to arr 
