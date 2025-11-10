#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        long long gc=__gcd(a,b);
        long long x=a/gc;
        long long y=b/gc;
        if(x>k||y>k){
            cout<<2<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }
    return 0;
}