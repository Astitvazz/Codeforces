#include <bits/stdc++.h>
using namespace std;
bool isTprime(int n){
        int count=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==1){
            return true;
        }
        return false;
    }
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        if(isTprime(n)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}