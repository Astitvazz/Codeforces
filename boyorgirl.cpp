#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;
    set<char> ss;
    for(int i=0;i<str.length();i++){
        ss.insert(str[i]);
    }
    if(ss.size()%2==0){
        cout<< "CHAT WITH HER!";
    }
    else{
        cout<< "IGNORE HIM!";
    }
    return 0;
}