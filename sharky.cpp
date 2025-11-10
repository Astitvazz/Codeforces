#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l;
        cin>>n>>m>>l;
        vector<pair<int,int>> aa;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            aa.push_back({a,b});
        }
        vector<vector<int>> vv;
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            vv.push_back({a,b});
        }
        stack<pair<int,int>> st;
        for(int i=aa.size()-1;i>=0;i--){
            st.push(aa[i]);
        }
        
    }
}