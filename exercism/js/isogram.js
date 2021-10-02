export const isIsogram = (word) => {
  const lowerCaseWord = word.toLowerCase();
  const letters = {};
  for(const character of lowerCaseWord){
    if(character.toLowerCase() !== character.toUpperCase()){
     if(letters[character]){
      letters[character] += 1;
     }else{
      letters[character] = 1;
     }
    }
  }
  const lettersValues = Object.values(letters);
  const isOne = number => number === 1;
  console.log(Object.entries(letters));
  return lettersValues.every(isOne);
};
