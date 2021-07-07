#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums){

    vector<int> res= nums;
    sort(res.begin(),res.end());
    for(auto &x : nums){
        x = lower_bound(res.begin(),res.end(),x) - res.begin() ;
    }
    return nums;
}

int main(){
    int n,x;
    vector<int> p;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>x;
        p.push_back(x);
    }
    vector<int> arr;
    arr= smallerNumbersThanCurrent(p);

    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}
