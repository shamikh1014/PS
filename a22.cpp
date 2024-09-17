// Best time to buy and sell stock.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int maxProfit(vector<int>& prices){

        int cost=prices[0];
        int sell=0;
        int profit=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]-cost>=profit){
                sell=prices[i];
                profit=prices[i]-cost;
            }

            if(cost>prices[i]){
                cost=prices[i];
            }
        }

        return profit;

    }

// };

int main(){

    vector<int> vec={7, 1, 5, 3, 6, 4};

    cout<<maxProfit(vec)<<endl;
    
    return 0;
}