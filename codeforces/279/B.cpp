#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        LL n,t;
        cin>>n>>t;
        vector<LL>a(n);
        for(int i = 0; i<n;i++){
            cin>>a[i];
        }
        //sort(a.begin(),a.end());
        LL ans = 0;
        int cnt = 0;
        int j = 0;
        int res = 0;
            for(int i = 0; i<n;){
                    if(t >= ans+ a[i]){
                            ans+=a[i];
                        cnt++;
                        i++;
                    }
                    else{
                            cnt--;
                        ans-=a[j];
                    j++;
                    }
                    res = max(res,cnt);
            }
                cout<<res<<endl;
        return 0;
}


