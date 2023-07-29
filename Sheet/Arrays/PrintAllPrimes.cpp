#include <iostream>
#include <vector>
using namespace std;

char seiveOfEratosthenes(int n){
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }
            cout<<i<<" ";
        }
    }
}

int main() {
    // Write C++ code here
    cout<<"enter to vale of n "<<endl;
    int n;
    cin>>n;
    if(n<2){
        cout<<"prime numbers starts from digit 2"<<endl;
    }
    else{
        seiveOfEratosthenes(n);
    }
}