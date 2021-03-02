/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

bool alpha(char c){
    return c>='A' and c<='Z';
}
bool numeric(char c){
    return c>='0' and c<='9';
}

void task(){
    string s; cin >> s;
    int n = s.size();
    bool _R = 0;
    for(int i = 1; i<n; i++){
        if(alpha(s[i]) and numeric(s[i-1]))_R = 1;
    }
    if(_R){
        int a = 0, b = 0, q = 1;
        char c = 'A';
        while(numeric(s[q])){
            a*=10;
            a+=s[q] - '0';
            q++;
        }
        q++;
        while(q < n){
            b*=10;
            b+=s[q]-'0';
            q++;
        }
        string column;
        while(b){
            b--;
            column+=c+b%26;
            b/=26;
        }

        reverse(column.begin(), column.end());
        cout << column << a << endl;
    }
    else{
        int a = 0, b = 0, q = 0;
        while(alpha(s[q])){
            a*=26;
            a+=s[q]-'A';
            a++;
            q++;
        }
        while(q < n){
            b*=10;
            b+=s[q]-'0';
            q++;
        }
        cout << "R"<<b<<"C"<<a<<endl;
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