// Contains duplicate.


#include<bits/stdc++.h> 
using namespace std;

// class Solution{
//     public:

    bool containsDuplicate(vector<int>& nums){

        unordered_map<int, int> mp;
        for(int i=0;i<nums.size(); i++){
            if(mp[nums[i]]){
                return true;
            }

            mp[nums[i]]=1;
        }

        return false;
    }

// };

int main(){

    vector<int> vec={1, 2, 3, 1};

    cout<<containsDuplicate(vec)<<endl;
    
    return 0;
}