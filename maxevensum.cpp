#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long res=-1;
        for(int i=b;i>=b/2;i--){
            if(b%i==0){
                long long x=b/i;
                long long y=a*i;
                long long k=x+y;
                if(k%2==0){
                    res=max(res,k);
                }
                else{
                    continue;
                }
            }
        }
        cout<<res<<"\n";
    }
}