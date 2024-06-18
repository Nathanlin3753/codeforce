#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n);
    for(int i = 0 ; i < n ; ++i) cin >> v[i];
    sort(begin(v),end(v));
    int left = 0, right = 0, cnt = 0, sum = 0;
    for(;right < n ; ++right){
        cnt++;
        while(left <= right && v[right]-v[left] >= m){
            if(v[left] > 0)
                cnt--;
            left++;
        }
        if(cnt == k){
            v[right] = 0;
            cnt--;
            sum++;
        }

    }
    cout << sum << endl;
}