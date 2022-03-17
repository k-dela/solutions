/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
  if(needle === ""){
      return 0;
  }
  const needleLen = needle.length;
  let temp;
  
  for(let i = 0; i < haystack.length; i++){
    if(haystack[i] === needle[0]){
      temp = haystack.substring(i,i+needleLen);
      if(temp === needle){
        return i;
      }
    }
  }

  return -1;
};
