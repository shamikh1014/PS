// Best time to buy and sell stock.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int maxProfit(vector<int>& prices){

        int maxi=0, lm=prices[0];
        for(int i=1;i<=prices.size();i++){
            maxi=max(maxi, prices[i]-lm);
            lm=min(lm, prices[i]);
        }

        return maxi;

    }

// };

int main(){

    vector<int> vec={7, 1, 5, 3, 6, 4};

    cout<<maxProfit(vec)<<endl;
    
    return 0;
}