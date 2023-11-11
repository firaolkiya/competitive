class Solution {
public:
    int countPrimes(int n) {
        bool ch;
        int sum=0;
        bool prime[n+1];
        for(int i=0;i<n;i++)
          prime[i]=false;
        for(int i=2;i<n;i++){
            if(prime[i])
              continue;
            else{
                for(int k=i+i;k<n;k+=i)
                  prime[k]=true;
            }
        }
        for(int i=2;i<n;i++){
            if(!prime[i])
            sum++;
        }
        return sum;

    }
};
