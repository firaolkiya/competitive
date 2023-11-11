class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int left=0;
        int right=n;
        vector<int>arr;
        while(left<n){
            arr.push_back(nums[left]);
            arr.push_back(nums[right]);
            right++;
            left++;
        }
        return arr;
    }
};
