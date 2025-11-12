#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> vv;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            vv.push_back(temp);
        }
        int count=1;
        int res=0;
        for(int i=0;i<vv.size()-1;i++){
            if(vv[i+1]<vv[i]){
                ++count;
                res=max(res,count);
            }
            else{
                count=1;
            }
        }
        if(res<=k){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}