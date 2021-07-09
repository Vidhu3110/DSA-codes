#include<bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
    int x = num1.size();
    int y = num2.size();
    if (x>y)
		swap(num1, num2);

    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());

    int carry = 0;
    string str="";
    for(int i=0;i<y;i++){
        int sum =((num1[i]-'0')+(num2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for(int i = y;i<x;i++){
        int sum = ((num2[i]-'0')+carry);
        str.push_back(sum%10 +'0');
        carry = sum/10;
    }
    if(carry){
        str.push_back(carry +'0');
    }
    reverse(str.begin(), str.end());
    return str;
}
int main(){
    string p="10000",q="19";

    string s = addStrings(p,q);
    for(auto x :s){
        cout<<x;
    }
}
