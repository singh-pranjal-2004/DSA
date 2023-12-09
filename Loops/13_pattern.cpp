#include<iostream>
using namespace std;

int main(){
    int n = 3;
    char a = 'A';
    for(int i = 0;i<n;i++){
        a = 'A'+i;
        for(int j = 0;j<n;j++){
            cout<<char(a)<<" ";
            a++;
        }
        cout<<endl;
    }
}