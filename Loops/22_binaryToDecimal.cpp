#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n = 111;
    
    int i = 0;
    int ans = 0;
    while(n != 0){
        int bit = n%10;

        ans = (pow(2,i)*bit) + ans;
        n = n/10;
        i++;
    }

    cout<<ans;
}