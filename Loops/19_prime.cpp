#include<iostream>
using namespace std;

int main(){
    int n = 103;
    for(int i = 2;i<n;i++){
        if(n%i==0){
            cout<<"Not prime";
            return -1;
        }
    }
    cout<<"Prime";
}