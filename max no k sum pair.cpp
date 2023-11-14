class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
         int left=0;
         int right=nums.size()-1;
         int sum=0;
         while(left<right){
             int temp=nums[left]+nums[right];
             if(temp==k){
                 sum++;
                 left++;
                 right--;
             }
             else if(temp<k)
               left++;
              else 
                right--;
         }
         return sum;
    }
};