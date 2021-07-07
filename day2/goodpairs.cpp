#include<bits/stdc++.h>
using namespace std;
    int numIdenticalPairs(vector<int> &nums) {
        unordered_map <int,int> m;
        int res =0;
        for(int x : nums){
            res +=m[x];
            m[x]++;
        }
        for(auto x : m){
            cout<<x.first<<"--->"<<x.second<<endl;
        }
        return res;
    }
int main(){
    int n;
    int x;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    int res = numIdenticalPairs(arr);
    cout<<"res = "<<res;
    return 0;
}
