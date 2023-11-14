
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int holder=0;
        int seeker=1;
        while(seeker<nums.size()){
            if(nums[holder]==nums[seeker])
               seeker++;
             else{
                 nums[++holder]=nums[seeker];
                 seeker++;
             }  
        }
        return holder+1;
    }
};