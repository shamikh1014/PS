// Maximum and minimum element in an array.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    int findSum(int A[], int N){

        int maxi=-1e9, mini=1e9;
        for(int i=0;i<N;i++){
            maxi=max(maxi, A[i]);
            mini=min(mini, A[i]);
        }

        return maxi+mini;
    }

// };

int main(){

    int arr[]={-2, 1, -4, 5, 3};

    cout<<findSum(arr, 5)<<endl;
    
    return 0;
}