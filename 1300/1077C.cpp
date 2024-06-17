#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n ;
    cin >> n;
    vector<ll> v(n+1);
    map<ll,ll> m;
    ll sum = 0;
    for(int i = 1 ; i <= n ; ++i){
        cin >> v[i];
        sum += v[i];
        m[v[i]]++;
    }

    vector<ll> ans;
    for(int i = 1 ; i<=n ; ++i){
        ll x = v[i];
        sum -= x;
        m[x]--;
        if(sum%2 == 0 && m[sum/2]){
            ans.push_back(i);
        }

        m[x]++;
        sum += x;
    }

    cout << ans.size() << '\n';
    for(auto a : ans)
        cout << a << " ";
    return 0;
}