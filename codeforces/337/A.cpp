#include<bits/stdc++.h>
typedef long long LL;
#define PB   	push_back
#define MP   	make_pair
#define ff       	first
#define ss      	second
#define lcm(a,b)       	a * (b / gcd(a, b))
#define gcd(a,b)       	__gcd(a,b)
#define test int ___T; scanf("%d", &___T); for(int cs=1;cs<=___T;cs++)
#define sqr(x)         	(x)*(x)
#define cube(x)      	(x)*(x)*(x)
const double pi = acos(-1);
using namespace std;
///sortingstringbytheirlengthincreasingorder
bool f(string s1,string s2){
    return s1.size()<s2.size();
}
        ///vector<string>s;sort(s.begin(),s.end(),f)
    int in(){
    int v;
    scanf("%d",&(v));
    return v;
    }

    LL Lin(){
    LL v;
    scanf("%lld",&(v));
    return v;
    }

    double Din(){
    double v;
    scanf("%lf",&(v));
    return v;
    }

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
 	//freopen("output.txt", "w", stdout);
    int n = in();
    int k = in();
    int mix =1005;
    vector<int>v(k);
    for(int i = 0; i<k;i++)
    {
        v[i] = in();
    }
    sort(v.begin(),v.end());
    //int m = abs(n-k);
    //cout<<*min_element(v.begin(),v.end())<<endl;
    //cout<<max(mix,vv[0]-vv[n-1])<<endl;
    for(int i =0; i<=k-n;i++){
        if(abs(v[i+n-1]-v[i])<mix) mix = abs(v[i+n-1]-v[i]);
    }
    cout<<mix<<endl;
    return 0;
}

