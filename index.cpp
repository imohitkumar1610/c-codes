#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    map<pair<char,int>,int> freq;
    char curr = s[0];
    int len = 1;
    freq[{curr, len}]++;
    for (int i = 1; i < n; i++)
    {
         if(curr != s[i]){
            len = 1;
            curr = s[i];
         }
         else
            len++;
        freq[{curr, len}]++;
         
    }
    int maxx = 0;
    for (auto &it : freq)
    {
        if(it.second == 1){
            maxx = max(maxx, it.first.second - 1);
        }
        maxx = max(maxx, it.first.second);
    }
    cout<<maxx<<endl;
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}