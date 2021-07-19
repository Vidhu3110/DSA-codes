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


*/

#include<bits/stdc++.h>
using namespace std;
