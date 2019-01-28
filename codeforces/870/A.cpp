#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>vn(n),vm(m),v;
        for(int i = 0; i<n; i++)cin>>vn[i];
        for(int i = 0; i<m; i++)cin>>vm[i];
        sort(vn.begin(),vn.end());
        sort(vm.begin(),vm.end());
        int a = vn[0];
        int b = vm[0];
        int cnt = 0;
        for(int i = 0; i<n;i++)
        {
            for(int j = 0; j<m;j++)
            {
                if(vn[i]==vm[j])
                {
                    cnt++;
                    v.push_back(vn[i]);
                }

            }
        }
        //cout<<cnt<<endl;
        if(cnt==0)
        {
            if(a>b)
            {
                cout<<b<<a<<endl;
            }
            else if(a<b){
                cout<<a<<b<<endl;
            }
        }
      else if(cnt>0)
        {
            int x = *min_element(v.begin(),v.end());
            cout<<x<<endl;
        }

}
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--)
    {
        solve();
    }
        return 0;
}



