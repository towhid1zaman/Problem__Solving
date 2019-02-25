#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    //pair<int , int>s[n];
    vector<int>v1,v2,v3;
    //int _1 = 0, _2=0,_3=0;
    for(int i = 1; i<=n;i++)
    {
        int x;
//        cin>>s[i].first;
//        s[i].second = i;
       cin>>x;
        if(x==1){
                v1.push_back(i);
                }
        else if(x==2){
                v2.push_back(i);
                }
        else{
                v3.push_back(i);
                }
    }
    //sort(s,s+n);

    int mn = min(min(v1.size(),v2.size()),v3.size());
    cout<<mn<<endl;
    for(int i = 0; i<mn;i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
    return 0;
}


