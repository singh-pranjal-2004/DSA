#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n = 7;

    int ans = 0, i = 0;
    while( n != 0){
        int bit = n & 1;

        ans = (pow(10, i) * bit) + ans;
        n = n >> 1;
        i++;
    }

    cout << ans;
}