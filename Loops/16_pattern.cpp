#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0;i<n;i++){
        int count = 1;
        for(int k = 0;k<n-i-1;k++){
            cout<<" ";
        }
        for(int l = 0;l<i;l++){
            cout<<count;
            count++;
        }

        while(count>0){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
}
