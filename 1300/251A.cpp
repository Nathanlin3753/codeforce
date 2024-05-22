#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    ll n , d;
    cin >> n >> d;
    vector<ll> v(n,0);
    for(int i = 0 ; i < n ; ++i) cin>>v[i];

    ll ans = 0;
    ll i = 0 , j = 0 , t;
    while(i<n){
        while(j+1<n && v[j+1]-v[i]<=d) j++;
        t = j-i-1;
        ans += t*(t+1)/2;
        ++i;
    }
    cout << ans << endl;
    return 0; 
}