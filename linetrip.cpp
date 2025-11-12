#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> vv;
        vv.push_back(0);
        while(n--){
            int temp;
            cin>>temp;
            vv.push_back(temp);
        }
        int res=0;
        for(int i=0;i<vv.size()-1;i++){
            res=max(res,vv[i+1]-vv[i]);
        }
        res=max(res,2*(x-vv[vv.size()-1]));
        
        cout<<res<<"\n";
    }
}