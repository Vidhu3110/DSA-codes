#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    vector<int> res;


    string s1=s;
    for(int i =0;i<indices.size();i++){
     s1[indices[i]] = s[i];
    }
    return s1;
}
int main(){
    string str;
    cin>>str;

    int n,x;
    cin>>n;
    vector<int> p;
    for(int i =0;i<n;i++){
        cin>>x;
        p.push_back(x);
    }
    string s = restoreString(str,p);

    cout<<s<<endl;
}
