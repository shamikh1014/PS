// Two sum.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    vector<int> twoSum(vector<int>& nums, int target){

        vector<int> v;

        unordered_map<int, int> mp;

        for(int i=0;i<nums.size();i++){

            if(mp.find(target-nums[i])!=mp.end()){

                v.push_back(mp[target-nums[i]]); // when we find the element in hashmap
                v.push_back(i);

                return v;
            }

            mp[nums[i]]=i;
        }

        return v;
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