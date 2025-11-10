#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int i=0;
        int j=n-1;
        int count=0;
        while(i<j){
            if(str[i]==str[j]){
                count++;
            }
            i++;
            j--;
        }
        if(k==count){
            cout<<"YES"<<"\n";
        }
        else{
            
        }
        
    }
    return 0;
}