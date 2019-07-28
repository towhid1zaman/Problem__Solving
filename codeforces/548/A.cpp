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
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
 
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;
 
 
int main(){
	IO
    string s;
    cin>>s;
    int k;
    cin>>k;
    int len = s.length();
    int round = len / k;
   // cout<<round<<endl;
    if(round*k!=len){
            //cout<<"OK"<<endl;
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag = true;
    int u = 0;
    int v = round;
    while(k--)
    {
        string res="";

        for(int i = u;i<v;i++)
        {
            res+=s[i];
        }
        string revres= res;
        reverse(all(revres));
        if(res!=revres){
            flag = false;
            break;
        }
        u+=round;
        v+=round;
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 
return 0;
}