#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    for(int i=1;i<=5;i++){
        if(i!=a&&i!=b&&i!=c&&i!=d){
            cout<<i;
        }
    }
    return 0;
}