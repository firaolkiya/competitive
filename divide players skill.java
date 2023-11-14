import java.util.Arrays;

class Solution {
    public long dividePlayers(int[] skill) {
        Arrays.sort(skill);
        int left=0;
        int right=skill.length-1;
       long sum=0;
        int temp=skill[left]+skill[right];
        while(left<right){
             if(skill[left]+skill[right]!=temp)
               return -1;
           sum+=skill[left]*skill[right];
           right--;
           left++;
        }
        return sum;
    }
}