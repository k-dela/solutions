/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    
    if(s.length !== t.length) return false;
    
    const trackerS = {};
    const trackerT = {};
    
    for(let letter of s){
        if(trackerS[letter]){
            trackerS[letter] += 1;
        }else{
            trackerS[letter] = 1;
        }
    }
    
    for(let letter of t){
        if(trackerT[letter]){
            trackerT[letter] += 1;
        }else{
            trackerT[letter] = 1;
        }
    }
    
    for(let key in trackerS){
        if(!trackerT[key]) return false;
        
        if(trackerT[key] !== trackerS[key]){
            return false;
        }
    }
    
    return true;
};
