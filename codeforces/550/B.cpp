  #include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
      	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            LL N,L,R,X;
            cin>>N>>L>>R>>X;
            vector<LL>v(N);
            for(int i = 0; i<N;i++){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            LL res = 0;
            for(int i = 0; i<(pow(2,N));i++){
                    LL sum = 0, m = 99999999,M = -1;
                    for(int j = 0; j<N;j++){
                        if(i&1<<j){
                            sum+=v[j];
                            m = min(m,v[j]);
                            M = max(M,v[j]);
                        }
                    }
                    if(sum>=L and sum<=R and (M-m)>=X){
                        res++;
                    }
                }
                cout<<res<<endl;


    return 0;
}

