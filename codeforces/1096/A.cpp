#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int T;
	cin >> T;
	while(T --){
		ll l, r,n,m;
		cin >> l >> r;
		n = l+1;
                for(ll k = n; k<=r; k++)
                {
                    if(k%l==0)
                    {
                        m = k;
                        break;
                    }
                }
		cout << l << " " << l*2 << endl;
	}

	return 0;
}
