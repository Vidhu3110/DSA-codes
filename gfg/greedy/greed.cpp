/*
    void minCoins(vector<int> coin,int amount){

    sort(coin.begin(),coin.end());
    int res =0;
    for(int i =coin.size()-1;i>=0;i--){
        if(coin[i]<=amount){
        int c = floor(amount/coin[i]);
        res += c;
        amount = amount-c*coin[i];
        }
        if(amount == 0)
            break;
    }
    return res;
}

*/
