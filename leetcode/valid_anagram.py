class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        trackerS = {}
        trackerT = {}
        
        for letter in s:
            if letter in trackerS:
                trackerS[letter] += 1
            else:
                trackerS[letter] = 1
        
        for letter in t:
            if letter in trackerT:
                trackerT[letter] += 1
            else:
                trackerT[letter] = 1
        
        for key in trackerS:
            if key in trackerT:
                if trackerS[key] == trackerT[key]:
                    pass
                else:
                    return False
            else:
                return False
        
        return True
