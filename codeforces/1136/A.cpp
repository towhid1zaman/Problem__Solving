#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int N;
    cin>>N;
    int l, r;
    int K;
    map<int,int>mip;
    map<int,int>:: iterator it;
    for(int i = 1; i<=N;i++){
        cin>>l>>r;
        mip[l] = r;
    }
    cin>>K;
    int res;
    int i = 1;
        for(it = mip.begin(); it!=mip.end(); it++ ){
            if((*it).first<=K and K<= (*it).second){
                res = i;
            }
            i++;
        }
        cout<<(N-res)+1<<endl;

        return 0;

}
