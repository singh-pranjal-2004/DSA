#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int f = 0;
    int s = 1;
    cout<<f<<" "<<s<<" ";
    for(int i = 0;i<n-2;i++){
        int t = f+s;
        cout<<t<<" ";
        f = s;
        s = t;
    }
}