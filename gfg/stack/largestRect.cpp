/*
    better solution
    init res = 0;
    create previous smaller element
    create next smaller element
    and do the following
        curr = arr[i];
        curr+= (i-ps[i]-1)*arr[i]
        curr+= (ns[i]-i-1)*arr[i];
        res = max(res,curr);


    efficient solution

    stack<int> s;
    int res = 0;

    for(int i =0;i<n;i++){
        while(s.empty()==false && s.top()>=arr[i]){
            int tp = s.pop();
            int curr = arr[tp]*((s.empty()) ? i : (i-s.top()-1));
            res = max(res,curr)
        }
        s.push(i);
    }
    while(s.empty()==false){
    tp = s.pop();
    curr = curr = arr[tp]*((s.empty()) ? n : (n-s.top()-1));
    res = max(res,curr);
}
return res;

*/

#include<bits/stdc++.h>
using namespace std;
int largestHist(vector <int> arr){
    stack<int> s;
    int res = 0;
    int tp;
    int n = arr.size();
    for(int i =0;i<arr.size();i++){
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            tp = s.top(); s.pop();
            int curr = arr[tp]*((s.empty()) ? i : (i-s.top()-1));
            res = max(res,curr);
        }
        s.push(i);
    }
    while(s.empty()==false){
        tp = s.top(); s.pop();
    int curr = arr[tp]*((s.empty()) ? n : (n-s.top()-1));
    res = max(res,curr);
}
return res;
}
int main(){
    vector<int> arr = {6,4,2,1,5,6};
    cout<<largestHist(arr);
    return 0;
}
