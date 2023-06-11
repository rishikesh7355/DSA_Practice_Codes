// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int seiveOfEratosthenes(int n){
    int count =0;
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }
        }
    }
    return count;
    
}

int main() {
    // Write C++ code here
    cout<<"enter to vale of n "<<endl;
    int n;
    cin>>n;
    int res = seiveOfEratosthenes(n);
    cout<< "total number of prime numbres are " <<res<<endl;
}