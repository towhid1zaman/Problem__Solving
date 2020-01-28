#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
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
#define sz(x) (int)x.size()

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _ios;

        int n;
        cin>>n;
        vi cards(n);
        rep(i,n)cin>>cards[i];
        int mx = maxv(cards);
        int mn = minv(cards);
        sort(all(cards));
//        bool same = false;
//        for(int i =1; i<n;i++){
//            if(cards[i]==cards[i-1])same = true;
//        }
//        if(same){
//            cout<<0<<endl;
//            return 0;
//        }
        if(n==1){
            cout<<-1<<endl;
            return 0;
        }
        else if(n==2){
            set<int>s;
            int d = cards[0]+cards[1];
            if(d%2==0){
                s.insert(d/2);
            }
            int k =mx - mn;
            s.insert(mn - k);
            s.insert(mx+k);
            cout<<sz(s)<<endl;
            for(auto x: s){
                cout<<x<<" ";
            }
            cout<<endl;
            return 0;
        }
        vector<int>dif;
        set<int>s;
        int d;
        for(int i = 1; i<n;i++){
            d = cards[i] - cards[i-1];
            dif.pb(d);
            s.insert(d);
        }
        auto x = s.begin();
        if(s.size()==1 and (*x)!=0){
            cout<<2<<endl;
            cout<<mn-(*x)<<" "<<mx+(*x)<<endl;
        }
        else if(s.size()==1 and (*x)==0){
            cout<<1<<endl;
            cout<<mn<<endl;
        }
        else if(s.size()>=3 or (s.size()==2 and *x==0)){
            cout<<0<<endl;
        }
        if(s.size()==2 and *x!=0){
            auto y = s.begin();
            *y++;
            int c = 0;
            sort(all(dif));
            for(int i = 0; i<dif.size();i++){
                if(dif[i]!=*x)c++;
            }
            if(c==1 and (*y%*x==0) and (*y / *x)==2){
                cout<<1<<endl;
                for(int i = 1; i<n;i++){
                    if(cards[i]- cards[i-1] == *y){
                        cout<<cards[i-1] + *x<<endl;
                        break;
                    }
                }
            }
            else cout<<0<<endl;
        }




return 0;
}





