#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n ;
    cin >> n ;
    while(n--){
        int len ;
        cin >> len;
        vector<int> v(len);
        vector<int> f(len);
        int n = len;
        for(int i = 0 ; i < len ; ++i)
            cin >> v[i];
        for(int i = 1 ; i < len-1 ; ++i){
            if( (v[i-1] > v[i]) ^ (v[i] < v[i+1])){
                n--;
                f[i] = true;
            }
        }
        cout << n << endl;
        for(int i = 0 ; i < len ; ++i)
            if(!f[i])
                cout << v[i] << " ";
        cout << endl;
        
    }
    return 0;
}