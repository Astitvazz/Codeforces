#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=INT_MIN;
        while(n--){
            int temp;
            cin>>temp;
            res=max(res,temp);
        }
        cout<<res<<"\n";
    }

}