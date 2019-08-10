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
const int N = int(3e5) + 99;
int n,m;
int chek(vector<int>&num,int mid)
{
    int sum = 0;
    for(int i = 100; i>=0;i--)
    {
        sum+=num[i]/mid;
    }
    return sum>=n;
}
int main(){
		IO

            cin>>n>>m;
            vector<int>v(105,0);
            for(int i = 0; i<m;i++)
            {
              int x;
              cin>>x;
              v[x]++;
            }
//            for(auto x: v)
//            {
//                cout<<x<<" ";
//            }
//            cout<<endl;

            int left = 1, right = 100,ans=0;
             while(left<=right){
              int mid = left+(right-left)/2;
              if(chek(v,mid)){
                    ans = mid;
                    left = mid+1;
                }
              else{
                     right = mid - 1;
                  }
            }
			cout<<ans<<endl;



return 0;
}
