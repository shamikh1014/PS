// Chocolate distribution problem.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    long long findMinDiff(vector<long long> a, long long n, long long m){

        // sorting
        sort(a.begin(), a.end());
        
        long long mini=a[0];
        long long maxi=a[m-1];
        long long ans=maxi-mini;

        for(int i=1;i<n-m+1;i++){
            mini=a[i];
            maxi=a[m+i-1];
            ans=min(ans, maxi-mini);
        }

        return ans;

    }

// };

int main(){

    vector<long long> vec={3, 4, 1, 9, 56, 7, 9, 12};
    
    cout<<findMinDiff(vec, 8, 5);

    return 0;
}