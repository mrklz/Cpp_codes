
#include "Concentration_of_Array.h"
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size()*2);
        for(int i=0; i<nums.size(); i++){
            ans[i]=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            ans[i+nums.size()]=nums[i];
        }
        return ans;
    }
};