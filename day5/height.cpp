int heightChecker(vector<int>& heights) {
    int count = 0;
    vector<int> p=heights;
    sort(p.begin(),p.end());
    for(int i = 0;i <heights.size();i++){
        if(p[i]!=heights[i])
            count++;
    }
    return count;
}
