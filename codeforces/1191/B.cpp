#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define endl "\n"
#define X first
#define Y second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define all(v) (v).begin(),(v).end()
#define mem(a,x) memset(a,x,sizeof(a))
#define trav(x,a) for(auto &x: a)
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;

int main(){f();

    string a,b,c;
	LL n,s=0,m=0;
	LL x,y,z;
	LL l[3],k[3],p=0,q=0,o[3],r=0,f=0;
	LL a1,a2;
	cin>>a>>b>>c;
	x = a[0];
	y = b[0];
	z = c[0];
	if(a[1]=='s'){
		s++;
		k[f++] = x;
	}
	else if(a[1]=='m'){
		l[q++] = x;
		m++;
	}
	else{
		o[r++] = x;
		p++;
	}

	if(b[1]=='s'){
		s++;
		k[f++] = y;
	}
	else if(b[1]=='m'){
		l[q++] = y;
		m++;
	}
	else{
		o[r++] = y;
		p++;
	}

	if(c[1]=='s'){
		s++;
		k[f++] = z;
	}
	else if(c[1]=='m'){
		l[q++] = z;
		m++;
	}
	else{
		o[r++] = z;
		p++;
	}
	int arr[3];
	arr[0] = x;
	arr[1] = y;
	arr[2] = z;
	sort(arr,arr+3);
	if(s==3 || m==3 || p==3)
	{
		a1 = arr[1]-arr[0];
		a2 = arr[2]-arr[1];
		if(a1==1&&a2==1)
		{
			cout<<0<<endl;
			return 0;
		}
		else if(a1==0 && a2==0)
		{
			cout<<0<<endl;
			return 0;
		}
		else if(a1==2 || a2==2)
		{
			cout<<1<<endl;
		}
		else{
			if(a1==0 || a2==0)
			{
				cout<<1<<endl;
			}
			else if(a1==1 || a2==1){
				cout<<1<<endl;
			}
			else cout<<2<<endl;
		}
	}

	else if(s==2 || m==2 || p==2)
	{
		if(s==2){
			sort(k,k+f);
			a1 = k[1]-k[0];
			if(a1==0 || a1==1 ||a1==2)
			{
				cout<<1<<endl;
			}

			else cout<<2<<endl;
		}

		else if(m==2){
			sort(l,l+q);
			a1 = l[1]-l[0];
			if(a1==0 or  a1==1 or a1==2)
			{
				cout<<1<<endl;
			}
            ///cout<<"OK"<<endl;
			else cout<<2<<endl;
		}


		else if(p==2){
			sort(o,o+r);
			a1 = o[1]-o[0];
			if(a1==0 || a1==1 ||a1==2)
			{
				cout<<1<<endl;
			}

			else cout<<2<<endl;
		}
	}

        else if(s==1 and  m==1 and  p==1)
        {
            cout<<2<<endl;
            
        }




	return 0;
}



