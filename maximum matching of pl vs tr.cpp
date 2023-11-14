class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int pl=0;
        int tr=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int sum=0;
        while(pl<players.size()&&tr<trainers.size()){
            if(players[pl]<=trainers[tr]){
                sum++;
                tr++;
                pl++;
            }
            else{
                tr++;
            }
        }
        return sum;
    }
};