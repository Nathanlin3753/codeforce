#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<string> t(n);
    for(int i = 0 ; i < n ; ++i) cin>>t[i];
    unordered_map<string,int> m;
    for(int i = 0 ; i < n ; ++i){
        if(m[t[i]]){
            cout << t[i]<<m[t[i]]<<endl;
        }else{
            cout << "OK" << endl;
        }
        m[t[i]]++;
    }
    return 0;
}