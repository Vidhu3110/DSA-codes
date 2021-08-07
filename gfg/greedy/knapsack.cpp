/*
    fractional knapsack
    1.calc ratio(value/weight) for every item
    2. sort in decreasing
    3. init res =0 and curr_cap = given_cap;
    4. do i in sorted order
        if(i.weight <= curr_cap){
            curr_cap -= i.weight
            res +=i.value;
    }
    else{
        res += (i.value)*(curr_gap/i.weight);
        return res;
    }
    return res;
}





    void mycmp(pair<int,int>a,pair<int,int>b){
        double r1 = (double)a.first/a.second;
        double r2 = (double)b.first/b.second;
        return r1>r2;
}

    double knapsack(int w ,pair<int,int>arr[],int n){
        sort(arr,arr+n,mycmp);

        double res = 0.0;
        for(int i =0;i<n;i++){
            if(arr[i].second<=w){
                res += arr[i].first;
                w = w-arr[i].second
        }
        else{
            res += arr[i].first *(double)w/arr[i].second;
            break;
        }
    }
    return res;
}
*/
