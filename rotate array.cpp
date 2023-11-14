class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        int index=nums.size()-k%nums.size();
        for(int i=0;i<nums.size();i++){
            if(index==nums.size())
              index=0;
           temp.push_back(nums[index]);
           index++;
        }
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }

    }
};