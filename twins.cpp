#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    vector<int> vv;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sum=sum+temp;
        vv.push_back(temp);
    }
    sort(vv.begin(),vv.end(),greater<int>());
    int runningsum=0;
    for(int i=0;i<vv.size();i++){
        runningsum+=vv[i];
        if(runningsum>sum-runningsum){
            cout<<i+1;
            break;
        }
    }
    return 0;
}