// Three sum.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    vector<vector<int>> threeSum(vector<int>& nums){

        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(int i=0;i<nums.size();i++){

            if(i==0 || (i>0 && nums[i]!=nums[i-1])){

                int low=i+1;
                int high=nums.size()-1;
                int req=-1*nums[i];

                while(low<high){

                    if(nums[low]+nums[high]==req){

                        vector<int> temp;

                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        result.push_back(temp);

                        while(low<high && nums[low]==nums[low+1]){
                            low++;
                        }

                        while(low<high && nums[high]==nums[high-1]){
                            high--;
                        }

                        low++;
                        high--;

                    }

                    else if(nums[low]+nums[high]<req){
                        low++;
                    }

                    else{
                        high--;
                    }

                }

            }

        }

        return result;

    }


// };

int main(){

    vector<int> vec={-1, 0, 1, 2, -1, 4};

    threeSum(vec);
    
    return 0;
}