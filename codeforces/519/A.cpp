#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
 int table[101][101];
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int T = 8;
        //char  Q  = 9 , R = 5, B = 3, N = 3, P = 1, K = 0; ///white
        //char q = 9, r = 5, b = 3, n = 3, p = 1, k = 0;  /// black
        int  sumW = 0;
        int sumB = 0;
            for(int i = 0; i<T;i++){
                for(int j = 0; j<T;j++){
                    char x;
                    cin>>x;
                    if(x=='.'){}
                    if(x=='Q')sumW+=9;
                    if(x=='R')sumW+=5;
                    if(x=='B')sumW+=3;
                    if(x=='N')sumW+=3;
                    if(x=='P')sumW+=1;
                    if(x=='K')sumW+=0;

                    if(x=='q')sumB+=9;
                    if(x=='r')sumB+=5;
                    if(x=='b')sumB+=3;
                    if(x=='n')sumB+=3;
                    if(x=='p')sumB+=1;
                    if(x=='k')sumB+=0;
//                    if(x==Q or x==R or x==B or x==N or x==p or x==K){
//                        sumW+= x;
//                    }
//                    else if(x==q or x==r or x==b or x==n or x==p or x==k){
//                        sumB += x;
//                    }
                }
            }
            //cout<<sumB<<endl<<sumW<<endl;
            if(sumB==sumW){
                cout<<"Draw"<<endl;
            }
            else if(sumB>sumW){
                cout<<"Black"<<endl;
            }
            else{
                cout<<"White"<<endl;
            }
    return 0;
}





