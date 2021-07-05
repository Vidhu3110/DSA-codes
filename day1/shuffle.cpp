#include<bits/stdc++.h>
using namespace std;
       vector<int> shuffle(vector<int>& nums, int n) {
        int j = n;
        vector<int> arr;
        for(int i =0,j=n;i<n;i++,j++){
            arr.push_back(nums[i]);
            arr.push_back(nums[j]);
        }
        return arr;
            
    }
int main() {
    int n,x,key;
    cin>>n;
    cin>>key;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    
    shuffle(arr,key);
    cout<<"Array: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}  