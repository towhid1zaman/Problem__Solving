#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
        int n; cin >> n;
        std::vector<int>v(n), one, two, three, four, six;
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }

        for(auto x: v){
            if(x == 1)one.push_back(x);
            if(x == 2)two.push_back(x);
            if(x == 3)three.push_back(x);
            if(x == 4)four.push_back(x);
            if(x == 6)six.push_back(x);
        }
        
        // a < b < c, a|b, b|c , v[i] <= 7, three possibilities
        // 1 2 4, 1 3 6, 1 2 6

        std::vector<int>ans;
        while(true){ // 1 2 4
            if(one.empty())break;
            ans.push_back(one.back());
            one.pop_back();
            if(two.empty()){
                ans.pop_back(); one.push_back(1);
                break;
            }
            ans.push_back(two.back());
            two.pop_back();
            if(four.empty()){
                ans.pop_back(); one.push_back(1);
                ans.pop_back(); two.push_back(2);
                break;
            }
            ans.push_back(four.back());
            four.pop_back();
        }
        while(true){//1 3 6
            if(one.empty())break;
            ans.push_back(one.back());
            one.pop_back();
            if(three.empty()){
                ans.pop_back(); one.push_back(1);
                break;
            }
            ans.push_back(three.back());
            three.pop_back();
            if(six.empty()){
                ans.pop_back(); one.push_back(1);
                ans.pop_back(); three.push_back(3);
                break;
            }
            ans.push_back(six.back());
            six.pop_back();
        }
        while(true){// 1 2 6
            if(one.empty())break;
            ans.push_back(one.back());
            one.pop_back();
            if(two.empty()){
                ans.pop_back(); one.push_back(1);
                break;
            }
            ans.push_back(two.back());
            two.pop_back();
            if(six.empty()){
                ans.pop_back(); one.push_back(1);
                ans.pop_back(); two.push_back(2);  
                break;
            }
            ans.push_back(six.back());
            six.pop_back();
        }

        if(ans.empty() or ( ans.size() < n)){
            cout << -1 << endl;
        }
        else{
            for(int i = 0; i<ans.size(); i+=3){
                for(int j = i; j<i+3;j++){
                    cout << ans[j]<<' ';
                }
                cout << endl;
            }
        }
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