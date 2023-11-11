class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string small,large;
        if(word1.length()>word2.length()){
            small=word2;
            large=word1;
        }
        else{
             small=word1;
            large=word2;
        }
        int i=0;
        string ans="";
          for(i=0;i<small.length();i++){
            ans+=word1[i];
            ans+=word2[i];
          }
          while(i<large.length()){
              ans+=large[i];
              i++;
          }
      return ans;
    }
};
