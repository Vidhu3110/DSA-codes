/*
    next greater element position wise

    void nextGreaterElement(int arr[], int n){
        stack<int> s;
        s.push(arr[n-1]);
        cout<<-1<<" ";

        for(i=n-2;i>=0;i--){
        while(s.empty() == false && s.top()<=arr[i])
            s.pop();
        int ng = (s.empty()) ? -1 : s.top();
        cout<<ng<<" ";
        s.push(arr[i]);
    }
    }
*/
