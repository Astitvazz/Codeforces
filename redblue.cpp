#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float n,r,b;
        cin>>n;
        cin>>r;
        cin>>b;
        int start=ceil(r/(b+1));
        string str(n,'*');
        int k=start;
        while(start<n){
            str[start]='B';
            start=start+k+1;
        }
        for(int i=0;i<str.length();i++){
            if(str[i]=='*'){
                str[i]='R';
            }
        }
        cout<<str;
    }
}