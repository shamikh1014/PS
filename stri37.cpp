// Find the index of the first occurence in a string.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    // TC: O(n*n) ----> TC: )(n+m) KMP and Rabin Karp
    // SC: O(1)

    int strStr(string haystack, string needle){

        int m=haystack.length();
        int n=needle.length();

        for(int i=0;i<=m-n;i++){

            for(int j=0;j<n;j++){

                if(haystack[i+j]!=needle[j]){
                    break;
                }

                if(j==n-1){
                    return i;
                }
            }
        }

        return -1;

    }


// };

int main(){

    cout<<strStr("sadbutsad", "sad")<<endl;
    
    return 0;
}