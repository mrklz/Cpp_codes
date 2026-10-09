#include "Shuffle.h"
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n*2);
        int left=0; int right=n;
        for(int i=0; i<n*2; i++){
            if(i%2==1){
               ans[i]=nums[right];
               right++;
            }
            else{
                ans[i]=nums[left];
                left++;
            }
        }
        return ans;
    }
};