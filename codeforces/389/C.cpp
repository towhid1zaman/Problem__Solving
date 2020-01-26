#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int (i)=0;(i)<(int)(a);(i)++)
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

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 1000100;

int box[maxn];
int n;
vector<int>v[maxn];
int  chek(int k){
    for(int i = 0; i<k;i++)v[i].clear();
    int cur = 0;
    for(int i = 1; i<=n;i++){
        v[cur].push_back(box[i]);
        cur++;
        cur%=k;
    }

    for(int i = 0;i<k;i++){
        int above = v[i].size();
        for(auto it: v[i]){
            above--;
            if(it<above)return 0;
        }
    }
    return 1;
}
int binarySearch(int low, int high){
    while(low<high){
        int mid = (low+high)>>1;
        if(chek(mid))
            high = mid;
        else low = mid+1;
    }

    return low;
}
int main(){
        _ios;

        cin>>n;
        rep1(i,1,n)cin>>box[i];
        sort(box+1,box+n+1);
        reverse(box+1,box+n+1);
        int ans = binarySearch(1,n);
        cout<<ans<<endl;





return 0;
}





