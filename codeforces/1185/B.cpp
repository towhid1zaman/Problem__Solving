#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 30000;
bool f[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n;
    cin>>n;
    string a,b;
    for(int i = 0; i<n;i++){
        cin>>a>>b;
        string aa = "";
        string bb = "";
        bool f = true;
        vector<int>A;
        vector<char>CA;
        vector<int>B;
        vector<char>CB;
        for(int k = 0; k<=a.length();k++)
        {
            if(a[k]!=a[k-1]){
                A.push_back(aa.length());
                CA.push_back(aa[0]);
                aa="";
            }
            aa+=a[k];
        }
//        for(auto x: A){
//            cout<<x<<" ";
//        }
//        cout<<endl;
//        for(auto x: CA){
//            cout<<x<<" ";
//        }
//        cout<<endl;
//cout<<endl;
        for(int k = 0; k<=b.length();k++)
        {
            if(b[k]!=b[k-1]){
                B.push_back(bb.length());
                CB.push_back(bb[0]);
                bb="";
            }
            bb+=b[k];
        }
//                for(auto x: B){
//            cout<<x<<" ";
//        }
//        cout<<endl;
//        for(auto x: CB){
//            cout<<x<<" ";
//        }
//        cout<<endl;
        if(A.size() !=B.size()){
            f = false;
        }
        for(int k = 1; k<A.size();k++){
            if(CA[k]!=CB[k]){
                f=false;
            }
            if(B[k]<A[k]){
                f = false;
            }
        }

        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



return 0;
}







