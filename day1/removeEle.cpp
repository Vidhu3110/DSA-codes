#include<bits/stdc++.h>
using namespace std;
    int removeElement(vector<int>& nums, int val) {
        int i =0, j = nums.size()-1;
        
        while(i<=j){
            if(nums[i]==val){
                nums[i]=nums[j];
                j--;
            }
            else
                i++;
        }
        return i;
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
    
    int k = removeElement(arr,key);
    cout << "Array new length: " << k << endl;
    cout<<"Array: ";
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}   