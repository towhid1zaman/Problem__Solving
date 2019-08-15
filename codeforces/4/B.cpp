//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N =450;



int main(){
IO

	int d,sumtime;
	cin>>d>>sumtime;
	pair<int,int>p[N];
	int mx = 0, mn = 0;
	vector<int>v;
	for(int i = 1; i<=d;i++){
        cin>>p[i].F>>p[i].S;
        mn+=p[i].F;
        mx+=p[i].S;
        v.push_back(p[i].F);
    }
    if(sumtime>=mn and mx>=sumtime){
        cout<<"YES"<<endl;
        for(int i = 1; i<=d and mn<sumtime;i++){
            for(int j=p[i].F; j<=p[i].S;j++){
                    if(mn-v[i-1]+j<=sumtime){
                        mn-=v[i-1];
                        mn+=j;
                        v[i-1] = j;
                    }
            }
        }
        for(int k = 0; k<v.size();k++){
            cout<<v[k]<<" ";
        }
        cout<<endl;
    }
    else cout<<"NO"<<endl;







return 0;
}


