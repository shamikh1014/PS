// Move zeroes.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void moveZeroes(vector<int>& nums){

        int nz=0;
        int z=0;

        int n=nums.size();
        while(nz<n){
            if(nums[nz]!=0){
                swap(nums[nz], nums[z]);
                nz++;
                z++;
            }

            else{
                nz++;
            }
        }
    }

// };

int main(){

    vector<int> vec={0, 1, 0, 3, 12};

    moveZeroes(vec);

    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<endl;
    
    return 0;
}