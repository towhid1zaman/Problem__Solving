#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

int dx4[] = {0,0,1,-1};
int dy4[] = {1,-1,0,0};
int dx8[] = {0,0,1,1,1,-1,-1,-1};
int dy8[] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;

int main(){
        _ios;

        int zero,one;
        cin>>zero>>one;
        map<string,int>card;
        card["zero"] = zero;
        card["one"] = one;
        string solveCard="";
        for(int i = 1; i<=zero+one;i++){
            if(card["one"]>0){
                solveCard+='1';
                card["one"]--;
            }
            if(card["zero"]>0){
                solveCard+='0';
                card["zero"]--;
            }
        }
        solveCard+="###";
        bool ok = true;
        for(int i = 0; i<solveCard.size();i++){
            if(solveCard[i]=='1'){
                if(solveCard[i+1]=='1'){
                    if(solveCard[i+2]=='1'){
                        ok = false;
                    }
                }
            }
            if(solveCard[i]=='0'){
                if(solveCard[i+1]=='0'){
                    ok = false;
                }
            }
        }
        if(ok and (solveCard.size()-3 == zero+one)){
            for(auto x: solveCard){
                if(x!='#'){
                    cout<<x;
                }
            }
            return 0;
        }
        if(zero>one+1 or one>zero*2 +2){
            cout<<-1<<endl;
            return 0;
        }
        solveCard="";
        for(int i = 0; i<2;i++){
            if(one> zero*2){
                solveCard+='1';
                one--;
            }
        }
        while(one+zero>0){
            solveCard+='0';
            zero--;
            if(one){
                solveCard+='1';
                one--;
            }
            if(one>2*zero){
                solveCard+='1';
                one--;
            }
        }
        cout<<solveCard<<endl;

return 0;
}





