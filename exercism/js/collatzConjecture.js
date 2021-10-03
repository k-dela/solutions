const isEven = (number) => !Boolean(number % 2);
export const steps = (n) => {
  if(n <= 0){
    throw new Error('Only positive numbers are allowed');
  }
  let number = n;
  let counterOfSteps = 0;
  
  while(number !== 1){
    if(isEven(number)){
      number = number / 2;
    }else{
      number = (number * 3) + 1;
    }
    //console.log(number);
    counterOfSteps++;
  }
  //console.log(counterOfSteps);
  return counterOfSteps;
};
