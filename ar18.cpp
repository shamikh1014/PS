// Next permutation.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void nextPermutation(vector<int>& nums){

        int n=nums.size();
        if(n==1){
            return;
        }

        bool flag=false;
        int i=n-2;

        for(i=n-2;i>=0 and flag==false;i--){

            for(int j=n-1;j>i;j--){

                if(nums[i]<nums[j]){

                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    flag=true;
                    break;
                }
            }
        }

        i++;
        if(flag==false){
            sort(nums.begin(), nums.end());
        }
        else{
            sort(nums.begin()+i+1, nums.end());
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