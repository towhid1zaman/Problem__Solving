#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#include<ext/pb_ds/detail/standard_policies.hpp>
#define ll long long
#define pb push_back

using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set2;
int a[500005];
int q;
void input();

void solve(){
    priority_queue<pair<int,int> >pq;
    vector<int>cus;
    ordered_set st;
    ordered_set2 st2;
    int cur =1;
    int p  =0;
    for(int j=0;j<q;j++){
        int type;
        cin>>type;

        if(type==1){
            int m;
            cin>>m;
            a[cur]=m;
            st.insert({m,-cur});
            st2.insert(cur++);
        }
        else if(type==2){
            if(p>0)cout<<" ";
            auto it = st2.begin();
            int  v = (*it);
            cout<<v;
            st.erase({a[v],-v});
            st2.erase(v);
            p++;
        }
        else{
            if(p>0)cout<<" ";
            auto it = st.rbegin();
            int  v = (*it).second;
            cout<<abs(v);
            st.erase({a[abs(v)],v});
            st2.erase(abs(v));
            p++;
        }

    }
    cout<<"\n";
}

void Clear(){

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    input();
    solve();
    Clear();
}

void input(){
    cin>>q;
}
