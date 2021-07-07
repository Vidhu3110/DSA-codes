#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts) {
    int max1=0,sum=0;
    for(int i =0;i<accounts.size();i++){
        for(int j =0;j<accounts[i].size();j++){
            sum = sum+accounts[i][j];
        }
        max1 = max(max1,sum);
        sum=0;
    }
    return max1;

}
int main(){
    int n,m;
    int x;
    cin>>n>>m;

    vector<vector<int>>arr;
    for(int i=0; i<n; i++){
        vector<int> row;
        for(int j =0;j<m;j++){
            cin>>x;
            row.push_back(x);
        }
        arr.push_back(row);
    }
    int res = maximumWealth(arr);
    cout<<res;
    return 0;
}
