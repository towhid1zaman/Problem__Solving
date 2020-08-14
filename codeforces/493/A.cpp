
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;
 
bool hvis[100];
bool avis[100];

void task(){
 	string home, away; cin >> home >> away;
 	int n; cin >> n;
 	std::map<int,int>home_cnt,away_cnt;
 	std::vector<pair<string,pair<int, int>>>ans;
 	while(n-->0){
 		char team, card;
 		int time,number;
 		cin >> time >> team >> number >> card;
 		if(team=='a'){
 			if((away_cnt[number] or card=='r') and (avis[number]==0)){
 				ans.pb({away,{number,time}});
 				avis[number]=1;
 			}
 			else if(avis[number]==0)away_cnt[number]++;
 		}
 		if(team=='h'){
 			if((home_cnt[number] or card=='r') and hvis[number]==0){
 				ans.pb({home,{number,time}});
 				hvis[number]=1;
 			}
 			else if(hvis[number]==0)home_cnt[number]++;
 		}
 	}
 	for(int i = 0; i<ans.size(); i++){
 		cout<<ans[i].first <<' '<<ans[i].second.first<<' '<<ans[i].second.second<<endl;
 	}
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


