#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<int> t(n,0);
    for(int i = 0 ; i < n ; ++i) cin>>t[i];
    for(int i = 0 ; i < n/3; ++i) {
        if( (t[i*3]&1) == (t[i*3+1]&1) && (t[i*3+1]&1) == (t[i*3+2]&1)) continue;
        int temp = (t[i*3]+t[i*3+1]+t[i*3+2]);
        for(int k = 0 ;k < 3 ; ++k)
            if((temp-t[i*3+k])%2 == 0) {
                cout << i*3+k+1 <<"\n";
                return 0;
                }
        
    }
    for(int i = n/3*3; i < n ; ++i){
        if(t[i]&1 != t[0]&1) {
            cout << i <<"\n";
            return 0;
        }
    }
    return 0;
}