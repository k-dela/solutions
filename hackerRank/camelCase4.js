function processData(input) {
    //console.log(input.split('\n'));
    const inputArr = input.split(/\r\n/);
    
    for(const input of inputArr){
      const operation = input[0];
      const type = input[2];
    
      let words = input.substring(4);
      
      if(operation === 'C'){
          words = words.split(' ');
          if(type === 'C'){
            for(let i = 0; i < words.length; i++){
              let currentWordArr = [...words[i]];
              currentWordArr[0] = currentWordArr[0].toUpperCase();
              words[i] = currentWordArr.join('');
            }
           words = words.join('');
           console.log(words);
          }else{
            for(let i = 1; i < words.length; i++){
              let currentWordArr = [...words[i]];
              currentWordArr[0] = currentWordArr[0].toUpperCase();
              words[i] = currentWordArr.join('');
            }
            words = words.join('');
            if(type === 'M'){
            console.log(words + "()");
            }else{
            console.log(words); 
           }
          }
      }else{
      if(type === 'M'){
        let wordArr = words.split('');
        wordArr.pop();
        wordArr.pop();
        words = wordArr;
      }

      //console.log(words);

      let result = [];
      let currentWord = "";
      for(let i = 0; i < words.length; i++){
          if(words[i] === words[i].toUpperCase()){
              if(currentWord !== ""){
                  result.push(currentWord);
                  currentWord = "";
              }
              currentWord += words[i].toLowerCase();
          }else{
              currentWord += words[i];
          }
          
          if(i === words.length - 1){
              result.push(currentWord);
          }
      }
      //console.log('The result is: ')
      console.log(result.join(' '));
    }
      }
    }
 


process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
