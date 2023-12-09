#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){
            cout<<j;
        }

        int k = (i-1)*2;
        while(k>0){
            cout<<"*";
            k--;
        }

        for(int l = n-i+1;l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }
}