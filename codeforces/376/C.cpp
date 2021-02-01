#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

/*
nonzero digits + a permutation(1, 6, 8, 9)+ zeros.
*/
string permDiv7(std::vector<string>_1689, int cur){
    for(int i = 0; i<_1689.size(); i++){
        string s = _1689[i];
        int pre = cur;
        for(int j = 0; j<s.size(); j++){
            pre = 10*pre + s[j] - '0';
            pre%=7;
        }
        if(pre == 0)return s;
    }
}

void task(){
    string s; cin >> s;


    std::vector<int>cnt(10, 0);
    for(int i = 0; i<s.size(); i++){
        cnt[ s[i] - '0']++;
    }

    cnt[1]--, cnt[6]--, cnt[8]--, cnt[9]--;

    string nonzero="";

    for(int i = 9;i>0; i--){
        for(int j = 0; j<cnt[i]; j++){
            nonzero+=char(i+'0');
        }
    }

    int cur = 0;
    for(int i = 0; i<nonzero.size(); i++){
        cur = 10*cur + nonzero[i] - '0';
        cur%=7;
    }
    std::vector<string>_1689;
    string p = "1689";
    sort(all(p));
    do{
        _1689.push_back(p);
    }while(next_permutation(all(p)));

    string perOf1689 = permDiv7(_1689, cur);
    string zeros = string(cnt[0], '0');

    cout << nonzero + perOf1689 + zeros << endl;

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