class Solution {
public:
    bool isSubsequence(string s, string t) {
      int sIndex = 0;
      for(int i = 0; i < t.size(); i++){
        if(t[i] == s[sIndex]){
          sIndex += 1;
        }
      }
      
      //cout << sIndex << endl;
      if(sIndex == s.size()){
        return true;
      }
      
      
      return false;
    }
};
