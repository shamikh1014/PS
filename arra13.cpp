// Best time to buy and sell stock 2


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int maxProfit(vector<int>& prices){
        int profit=0;

        for(int i=1;i<prices.size();i++){

            if(prices[i]>prices[i-1]){
                profit+=(prices[i]-prices[i-1]);
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