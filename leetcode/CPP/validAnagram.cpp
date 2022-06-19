class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size() != t.size()) return false;
      
      map<char, int> trackerS;
      map<char, int> trackerT;
      
      for(int i = 0; i < s.size();i++){
        if(trackerS.find(s[i]) != trackerS.end()){
          trackerS[s[i]] += 1;
        }else{
          trackerS[s[i]] = 1;
        }
        
        if(trackerT.find(t[i]) != trackerT.end()){
          trackerT[t[i]] += 1;
        }else{
          trackerT[t[i]] = 1;
        }
      }
      
      
      for(const auto &item : trackerS){
        if(trackerT.find(item.first) != trackerT.end()){
          if(trackerT[item.first] != trackerS[item.first]){
            return false;
          }
        }else{
          return false;
        }
      }
      
      
      return true;
      
      
    }
};
