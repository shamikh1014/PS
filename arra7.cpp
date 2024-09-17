// Remove duplicates from sorted array.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int removeDuplicates(vector<int>& nums){

        if(nums.size()==0){
            return 0;
        }

        int i=0;
        for(int j=1;j<nums.size();j++){

            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }

        }

        return i+1;

    }


// };

int main(){

    vector<int> vec={1, 1, 2};

    cout<<removeDuplicates(vec)<<endl;
    
    return 0;
}