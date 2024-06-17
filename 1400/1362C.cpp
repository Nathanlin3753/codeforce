#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int c;
    cin >> c;
    ll x;
    while(c--){
        cin >> x;
        ll t = 1 , sum = 0;
        while(x>=t){
            sum += x/t;
            t*=2;
        }
        cout << sum << endl;
    }
    return 0;
}