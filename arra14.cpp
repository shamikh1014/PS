// Subarray sums divisible by k.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int subarrayDivisibleByK(vector<int>& nums, int k){

        int ans=0; // count the number of subarrays

        unordered_map<int, int> map;
        map[0]=1; // this 1 is the frequency of thr remainder which is 0 initially

        int sum=0;
        int rem=0;

        for(int i=0;i<nums.size();i++){

            sum+=nums[i];
            rem=sum%k;

            if(rem<0){
                rem+=k;
            }

            if(map.find(rem)!=map.end()){
                ans+=map[rem]; // storing the freq in thr final result
                map[rem]++; // incrementing the frequency of the remainder in the map
            }

            else{
                map[rem]=1;
            }
        }

        return ans;
    }


// };

int main(){

    vector<int> vec={4, 5, 0, -2, -3, 1};

    cout<<subarrayDivisibleByK(vec, 5)<<endl;

    return 0;
}