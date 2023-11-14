class Solution {
public:
    bool judgeSquareSum(int c) {
        long int left=0;
      long int right=sqrt(c)+1;
     long long p=0;
       while(left<=right){
           p=left*left+right*right;
           if(p==c)
             return true;
           else if(left==right)
           break;
           else if(p>c)
             right--;
           else
           left++;
       }
       return false;
    }
};