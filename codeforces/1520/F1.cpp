/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
//#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, q; cin >> n >> q;
    std::vector<int> a(200005, 0);
    while(q--){
        int pos; cin >> pos;
        int low = 0, high = n;
        while(high - low > 1){
            int mid = (high + low)/2;
            cout.flush() << "? "<<1 <<' '<<mid<<endl;
            cin >> a[mid];
            if(mid - a[mid] >= pos){
                high = mid;
            }
            else low = mid;
        }
        cout.flush() << "! "<< high << endl;
    }
      
return 0;
}