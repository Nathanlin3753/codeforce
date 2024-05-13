#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    int n , d;
    cin >> n >> d;
    vector<ll> v(n,0);
    for(int i = 0 ; i < n ; ++i) cin>>v[i];

    int ans = 0 , diff;
    for(int i = 0 ; i+2 < n ; ++i){
        diff = lower_bound(v.begin(),v.end(),v[i]+d)-v.begin();
        if(v[i]+d != v[diff]) --diff;
        diff -= i;
        if(diff>=2)
            ans += (diff*(diff-1))/2;
    }
    cout << ans << endl;
    return 0; 
}