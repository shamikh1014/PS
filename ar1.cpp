// Two sum.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    vector<int> twoSum(vector<int>& nums, int target){

        vector<int> result;

        for(int i=0;i<=nums.size()-2;i++){

            for(int j=i+1;j<nums.size()-2;j++){

                if(nums[i]+nums[j]==target){

                    result.push_back(i);

                    result.push_back(j);

                    return result;
                }
            }
        }

        return result;
    }

// };

int main(){

    vector<int> vec={2, 7, 11, 15};

    vector<int> v=twoSum(vec, 9);

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    
    return 0;
}