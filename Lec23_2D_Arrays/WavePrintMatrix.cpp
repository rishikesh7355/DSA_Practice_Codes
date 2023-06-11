//program is skipping odd indexes
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main()
{
     // printing matrix like wave 
    //taking array input 
    cout<<"enter array numners " << endl;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>> arr[i][j] ;
        }
    }
    for(int c=0;c<3;c++) {
    //odd index bottom to top
        if( c&1 ){
            for(int r =r-1; r>=0; r--){
                cout<< arr[r][c]<< " ";
            }
        }//even index top to bottom
        else {
            for(int r = 0; r<3; r++){
                cout<<arr[r][c]<< " ";
            }
        }
    }
}
