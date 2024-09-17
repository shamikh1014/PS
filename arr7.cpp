// Next Permutation.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void nextPermutation(vector<int>& nums){

        bool flag=0;

        for(int i=nums.size()-1;i>=1;i++){

            if(nums[i-1]<nums[i]){
                flag=1;
                int temp=nums[i-1];

                sort(nums.begin()+i-1, nums.end());
                int j=i-1;

                for(;j<nums.size();j++){
                    if(nums[j]>temp){
                        break;
                    }
                }

                swap(nums[i-1], nums[j]);
                sort(nums.begin()+i, nums.end());
                break;
            }
        }

        if(flag==0){
            reverse(nums.begin(), nums.end());
        }

        return;

    }


// };

int main(){

    vector<int> vec={1, 2, 3};

    nextPermutation(vec);

    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<endl;
    
    return 0;
}