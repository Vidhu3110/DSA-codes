/*
    O(1) and O(n)space sol

    stack<int> ms;
    stack<int> as;

    void push(int x){
    if(ms.empty()){
    ms.push(x);as.push(x);
    return;
    }
    ms.push(x);
    if(as.top()>=ms.top())
        as.push(x);
    }
    void pop(){
    if(as.top()==ms.top())
        as.pop()
    ms.pop();
}

in O(1) time and O(1) space tricky solution
    working

*/

#include<bits/stdc++.h>
using namespace std;
struct Stack{
    stack<int> s;
    int min1;

    void push(int x){
        if(s.empty()){
            min1 = x;
        s.push(x);
    }else if(x<=min1){
            s.push(2*x-min1);
            min1 = x;
        }else
            s.push(x);
    }
    int pop(){
        int t = s.top();s.pop();
        if(t<=min1){
        int res=min1;
       min1=2*min1-t;
       return res;
        }
        else
       return t;
        }
    int top(){
        int t = s.top();
        return (t<=min1) ? min1:t;
    }
    int getMin(){
        return min1;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(11);
    s.push(12);
    cout<<s.getMin()<<" ";
    s.pop();
    s.push(2);
    cout<<s.getMin()<<" ";
    return 0;
}
