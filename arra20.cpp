// Subarray sum equals K


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int subarraySum(vector<int>& nums, int k){

        // int count=0;
        // int n=nums.size();

        // for(int i=0;i<n;i++){
        //     int currentSum=0;

        //     for(int j=i;j<n;j++){
        //         currentSum+=nums[j];
        //         if(currentSum==k){
        //             count++;
        //         }
        //     }
        // }

        // return count;


        int ans=0;
        unordered_map<int, int> map;
        map[0]=1;
        int sum=0;

        for(int num:nums){
            sum+=num;

            if(map.count(sum-k)){
                ans+=map[sum-k];
            }

            map[sum]++;
        }


        return ans;
    }

// };

int main(){

    vector<int> vec={1, 1, 1};

    cout<<subarraySum(vec, 2)<<endl;
    
    return 0;
}