#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    std::vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    string letters = string(100, 'a');
    cout << letters<<endl;
    for(int i = 0; i<n; i++){
        if(letters[ a[i] ] == 'a'){
            letters[ a[i] ] = 'b';
        }
        else letters[ a[i] ] = 'a';
        cout <<letters<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}