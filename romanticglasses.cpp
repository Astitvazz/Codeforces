#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vv;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            vv.push_back(a);
        }
        unordered_set<int> st;
        int odd=0;
        int even=0;
        int found=0;
        st.insert(0);
        for(int i=0;i<vv.size();i++){
            if(i%2==0){
                odd+=vv[i];
                int temp=odd-even;
                if(st.find(temp)!=st.end()){
                    found=1;
                    break;
                }
                else{
                    st.insert(temp);
                }
            }
            else{
                even+=vv[i];
                int temp=odd-even;
                if(st.find(temp)!=st.end()){
                    found=1;
                    break;
                }
                else{
                    st.insert(temp);
                }
            }
        }
        if(found==0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
}