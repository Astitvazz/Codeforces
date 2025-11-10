#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long temp=11;
        vector<long long> vv;
        while(temp<=n){
            if(n%temp==0){
                vv.push_back(n/temp);
            }
            temp=(temp-1)*10+1;
        }
        sort(vv.begin(),vv.end());
        cout<<vv.size()<<"\n";
        for(int i=0;i<vv.size();i++){
            cout<<vv[i]<<" ";
            if(i==vv.size()-1){
                cout<<"\n";
            }
        }
    }
    return 0;
}