// Maximum points you can obtain from cards.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int maxScore(vector<int>& cardPoints, int k){

        int c=0, i=0, j, sum=0, ans=0, n=cardPoints.size();

        for(j=0;c<n-k;j++,c++){
            sum+=cardPoints[j];
        }

        int t_sum=accumulate(cardPoints.begin(), cardPoints.end(), 0);

        ans=max(ans, t_sum-sum);

        while(j<cardPoints.size()){

            sum-=cardPoints[i++];
            sum+=cardPoints[j++];
            ans=max(ans, t_sum-sum);
        }

        return ans;

    }


// };

int main(){

    vector<int> vec={1, 2, 3, 4, 5, 6, 1};

    cout<<maxScore(vec, 3)<<endl;
    
    return 0;
}