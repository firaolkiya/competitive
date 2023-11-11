class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int sum=0;
        int tt=0;
        for(int i=0;i<hours.size();i++){
            sum=hours[i];
            if(sum>=target){
                tt++;
            }

        }
        return tt;
    }
};
