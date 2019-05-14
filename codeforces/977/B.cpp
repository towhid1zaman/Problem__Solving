#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<double , double> pdd;
typedef pair<LL , LL > pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<LL> vl;
typedef long double LD;

#define pb push_back
#define lcm(a,b) a * (b / gcd(a, b))
#define gcd(a,b) __gcd(a,b)
#define nl "\n"
#define inf 2e16
#define MAX (int)2e5+5
#define pi	acos(-1.0)
#define ff first
#define ss second
#define mp make_pair
#define check() {printf("OK\n");}
#define mem(a,x) memset(a,x,sizeof(a))
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define UN(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
    bool pred(const std::pair<std::string,int>&lhs,const std::pair<std::string,int>&rhs){
            return lhs.second<rhs.second;
    }
int main()
{f();

        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2){
            cout<<s<<nl;
            return 0;
        }
        if(n==3){
            cout<<s[0]<<s[1]<<nl;
            return 0;
        }
        vector<string>res;
        for(int i = 0; i<n;i++){
                string a = s.substr(i,2);
                res.push_back(a);
               a = "";
        }
        //cout<<maxv(res)<<nl;
        map<string,int>m;
        for(int i  = 0; i<s.size(); i++){
            //cout<<res[i]<<" ";
            m[res[i] ]++;

        }
                vector<int>maxi;
                for(auto it = m.begin(); it !=m.end(); it++){
                    maxi.pb((*it).second);
                }
                //int mx = max_element(m.begin(),m.end(),pred)->second;
              //  cout<<mx<<endl;
                    int mx = maxv(maxi);
                    //cout<<mx<<nl;


//
//        for(auto it = m.begin(); it !=m.end(); it++){
//            cout<<(*it).ff<<" "<<(*it).ss<<nl;
//        }
//        cout<<nl;

                    for(auto it = m.begin(); it !=m.end(); it++){
                        if((*it).ss == mx){
                            cout<<(*it).ff<<nl;
                            return 0;
                        }
                    }









	cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
    return 0;
}

