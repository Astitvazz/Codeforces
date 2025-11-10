#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        vector<int> arr(len,-1);
        unordered_set<int> ss;
        for(int i=0;i<len;i++){
            
            cin>>arr[i];
            ss.insert(arr[i]);
        }
        vector<int> vv;
        for(int i=1;i<=len;i++){
            if(ss.find(i)==ss.end()){
                vv.push_back(i);
            }
        }
        int point=0;
        vector<int> res;
        unordered_set<int> st2;
        for(int i=0;i<arr.size();i++){
            if(st2.find(arr[i])==st2.end()&&!vv.empty()){
                for(int j=0;j<arr[i];j++){
                    res.push_back(vv[point]);
                }
                point++;
                st2.insert(arr[i]);
            }
        }
        if(res.size()!=len){
            cout<<-1<<" ";
        }
        else{
            for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
        }
    }
    return 0;
}