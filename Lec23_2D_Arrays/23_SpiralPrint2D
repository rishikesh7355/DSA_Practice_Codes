// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
  //Program to print spriral  in 2D matrix
  //starting row
  //ending column
  //ending row 
  //starting column
  
  //taking array elemets input from user 
  int row;
  cout<<"enter number of rows "<<endl;
  cin>>row;
  int col;
  cout<<"enter number of coulmns "<<endl;
  cin >> col;
  int arr[row][col];
  cout << "enter matrix elemets"<<endl;
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          cin>>arr[i][j];
      }
  }
  int startingRow=0;
  int startingCol=0;
  int endingRow=row-1;
  int endingCol = col-1;
  int total = row*col;
  int count=0;
  while(count < total){
      //starting row
      for(int i =startingCol;count < total && i<=endingCol;i++){
          cout<<arr[startingRow][i]<<" ";
          count ++;
      }
      startingRow++;
      //ending col
      for(int i=startingRow;count < total && i<=endingRow;i++){
          cout<<arr[i][endingCol]<<" ";
          count++;
      }
      endingCol--;
      //ending row
      for(int i=endingCol;count < total && i>=startingCol;i--){
          cout<<arr[endingRow][i]<<" ";
          count++;
      }
      endingRow--;
      //starting column;
      for(int i=endingRow;count < total && i>=startingRow;i--){
          cout<<arr[i][startingCol]<<" ";
          count++;
      }
      startingCol++;
  }
  
  

    return 0;
}