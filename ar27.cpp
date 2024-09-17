// Find the duplicate number.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int findDuplicate(vector<int>& nums){

        int n=nums.size()-1;
        int h[n+1];

        for(int i=0;i<n+1;i++){
            h[i]=0;
        }

        for(int i=0;i<nums.size();i++){
            h[nums[i]]++;
        }

        for(int i=0;i<n;i++){
            if(h[i]>1){
                return i;
            }
        }

        return -1;

    }

// };

int main(){

    vector<int> vec={1, 3, 4, 2, 2};

    cout<<findDuplicate(vec)<<endl;
    
    return 0;
}