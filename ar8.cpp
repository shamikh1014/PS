// Majority element.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int majorityelement(vector<int>& nums){

        if(nums.size()==1){
            return(nums[0]);
        }

        sort(nums.begin(), nums.end());

        int freq_ele=nums[0];
        int freq=1;
        int curr=1;

        for(int i=0;i<nums.size()+1;i++){

            if(i==nums.size()-1){

                if(nums[i]==nums[i-1]){

                    curr++;

                }
            }

            if(i<nums.size()-1 and nums[i]==nums[i+1]){
                curr++;
            }

            else{

                if(curr>freq){
                    freq=curr;
                    freq_ele=nums[i];
                }

                curr=1;
            }
        }

        return(freq_ele);

    }


// };

int main(){

    vector<int> vec={3, 2, 3};

    cout<<majorityelement(vec)<<endl;
    
    return 0;
}