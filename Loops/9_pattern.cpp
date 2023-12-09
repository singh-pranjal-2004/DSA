#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0;i<n;i++){
        int ii = i;
        for(int j = 0;j<=i;j++){
            cout<<ii+1;
            ii--;
        }
        cout<<endl;
    }
}