#include "Max_Consecutive_Once.h"
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
       
        int maxi = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                counter++;
                if(counter>maxi){
                    maxi=counter;
                }
            }
            else if(nums[i]==0){
                counter=0;
            }
            
        }
        return maxi;
    }
};