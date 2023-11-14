import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> partitionLabels(String s) {
        int left=0;
        int start=0;
        int right=0;
        List<Integer>mylist=new ArrayList();
        while(right<s.length()){
            int x=s.indexOf(s.charAt(left),right+1);
            if(x!=-1&&x>right){
              right=s.indexOf(s.charAt(left),right+1);
            }
            else if(left==right){
                mylist.add(left-start+1);
                start=left+1;
                right++;
                left++;
                 if(right>=s.length()&&left<s.length())
                  mylist.add(1);
            }

            else
            left++;
        
    }
     return mylist;
}
}
