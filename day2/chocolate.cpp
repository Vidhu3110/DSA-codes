#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    int max1 =0;
    vector<bool> arr;
  for (int i = 0; i < candies.size();i++){
      max1 = max(max1,candies[i]);
  }
  for(int i =0;i<candies.size();i++){
      if(candies[i]+extraCandies>=max1){
          arr.push_back(true);
      }
      else
        arr.push_back(false);
  }
  return arr;
}

int main(){
    int n,extraCandies;
    int x;
    cin>>n;
    cin>>extraCandies;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    vector<bool> res;
    res =  kidsWithCandies(arr,extraCandies);

    vector<bool>::iterator it;
    for(it = res.begin(); it != res.end(); it++)
    cout << *it;


    return 0;

}
