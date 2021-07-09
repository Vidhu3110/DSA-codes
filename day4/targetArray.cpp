#include <bits/stdc++.h>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       vector<int> arr;
       for(int i =0;i<nums.size();i++){
           arr.insert(arr.begin()+index[i],nums[i]);
       }
       return arr;
   }

   int main(){
       int n;
       int x;
       cin>>n;
       vector<int> arr,arr2;
       for(int i=0; i<n; i++){
           cin>>x;
           arr.push_back(x);
       }
       for(int i=0; i<n; i++){
           cin>>x;
           arr2.push_back(x);
       }
       vector<int> res = createTargetArray(arr,arr2);

       for(auto x : res){
           cout<<x<<" ";
       }
       return 0;
   }
