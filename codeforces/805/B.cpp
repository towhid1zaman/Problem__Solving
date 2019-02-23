#include<bits/stdc++.h>
typedef long long LL;
#define pb     	push_back
#define mp    	make_pair
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
LL x;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
 	//freopen("output.txt", "w", stdout);
            LL n;
            n = Lin();
            for(int i = 0; i<n;i++){
                x++;
                if(x<3) cout<<'a';
                else if(x==3)cout<<'b';
                else cout<<'b',x=0;
            }

    return 0;
}

