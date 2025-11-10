#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> vv;
        for(int i=0;i<n;i++){
            vector<int> temp;
            int a,b;
            cin>>a>>b;
            temp={a,b};
            vv.push_back(temp);
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<vv.size();i++){
            int sum=vv[i][0]+vv[i][1];
            pq.push({sum,i});
        }
        vector<int> indices;
        while(pq.empty()==false){
            indices.push_back(pq.top().second);
            pq.pop();
        }
        vector<int> res;
        for(int i=0;i<indices.size();i++){
            res.push_back(vv[indices[i]][0]);
             res.push_back(vv[indices[i]][1]);

        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
    }
    return 0;
}