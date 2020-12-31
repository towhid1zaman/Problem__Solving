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
    string s; cin >> s;
    std::vector<int>dig;
    int sum = 0;
    for(char c: s){
        sum+= c-'0';
        dig.push_back(c-'0');
    }
    sort(all(dig));
    int min_digit = 0;
    for(int d:dig){
        if(sum >= n) break;
        min_digit++;
        sum+=(9-d);
    }
    cout << min_digit << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}