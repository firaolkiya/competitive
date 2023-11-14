class Solution {
    public boolean isPalindrome(String s) {
        String m="";
        for(int i=0;i<s.length();i++){
            if(Character.isLowerCase(s.charAt(i))||Character.isDigit(s.charAt(i))){
                m+=s.charAt(i);
            }
            else if(Character.isUpperCase(s.charAt(i))){
                m+=Character.toLowerCase(s.charAt(i));
            }
            else 
            continue;
        }
        int l=0;
        int r=m.length()-1;
        while(l<r){
            if(m.charAt(l)!=m.charAt(r))
              return false;

              r--;
              l++;
        }
        return true;
    }
}