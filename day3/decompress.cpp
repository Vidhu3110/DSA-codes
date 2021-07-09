#include <bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int>arr;
    int i = 0;
    for(i=0;i<nums.size();i+=2){
        int freq = nums[i];
        int val = nums[i+1];
        while(freq--){
            arr.push_back(val);
        }

    }
    return arr;
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
    arr= decompressRLElist(p);

    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}
