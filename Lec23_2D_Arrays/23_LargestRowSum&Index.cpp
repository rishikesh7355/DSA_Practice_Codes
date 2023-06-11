// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

 int largestSum(int arr[][3], int r, int c){
     int maxi = -1;
     int rowIndex = -1;
        for(int i=0; i<3;i++){
            int sum=0;
            for(int j=0;j<3;j++){
                sum+=arr[i][j];
            }
            if(sum >maxi){
                maxi = sum;
                rowIndex = i;
            }
        }
    cout<< "largest sum is " << maxi << endl; ;
    return rowIndex;
        
    }

int main() {
    // Write C++ code here
    //largest row sum in matrix and its index
    cout<<"Enter elemets of matrtix";
    int arr[3][3];
        for(int i=0; i<3;i++){
            for(int j=0;j<3;j++){
                cin >>arr[i][j];
            }
        }
        //printing array 
        for(int i=0; i<3;i++){
            for(int j=0;j<3;j++){
                cout << arr[i][j] << " ";
            } 
            cout << endl;
        }
        
        int indx = largestSum(arr,3,3);
        cout<< "at index "<< indx ; 
        
    }
   