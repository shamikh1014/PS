// Jump game.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    bool canJump(vector<int>& nums){

        int finalPosition=nums.size()-1;

        for(int idx=nums.size()-2;idx>=0;idx--){

            if(idx+nums[idx]>=finalPosition){
                finalPosition=idx;
            }
        }

        return finalPosition==0;
    }

// };

int main(){

    vector<int> vec={2, 3, 1, 1, 4};

    cout<<canJump(vec)<<endl;
    
    return 0;
}