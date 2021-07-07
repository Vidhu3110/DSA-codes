#include<bits/stdc++.h>
using namespace std;

void intersection(vector<int> &nums1 , vector<int> &nums2){
  unordered_set<int> p;
  vector<int> arr;
  for(int i =0;i<nums1.size();i++){
      p.insert(nums1[i]);
  }
  for(int i =0;i<nums1.size();i++){
      if(p.find(nums2[i])!=p.end()){
          p.erase(nums2[i]);
          arr.push_back(nums2[i]);
      }
  }
  for(auto i : arr){
      cout<<"intersection is "<<i;
  }

}

int main(){
    int n,m;
    int x;
    cin>>n>>m;
    vector<int> arr,arr2;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0; i<m; i++){
        cin>>x;
        arr2.push_back(x);
    }
    intersection(arr,arr2);

    return 0;

}
