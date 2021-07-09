// LCP
#include <bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(vector<string> &s){
    string str ="";
    sort(s.begin(),s.end());
    int n =s.size();
    int x = min(s[0].size(),s[n-1].size());

    for(int i =0;i<x;i++){
        if(s[0][i]==s[n-1][i])
            str = str + s[0][i];
        else
            break;

    }
    return str;
}
int main(){
    string str;

    int n;
    cin>>n;
    vector<string> p(n);
    for(int i =0;i<n;i++){
        cin>>p[i];
    }
    string s = LongestCommonPrefix(p);
    cout<<s<<" ";

}
