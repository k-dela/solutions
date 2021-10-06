export class Squares {
  constructor(num) {
    this.num = num;
  }

  get sumOfSquares() {
    let sum = 0;
    let squaredNum;
    
    for(let i = 1; i <= this.num; i++){
      squaredNum = i * i;
      sum += squaredNum;
    }
    return sum;
  }

  get squareOfSum() {
    let sum = 0;
    for(let i = 1; i <= this.num; i++){
      sum += i;
    }

    return sum * sum;
  }

  get difference() {
    const squareOfTheSum = this.squareOfSum;
    const sumOfTheSquare = this.sumOfSquares;

    return squareOfTheSum - sumOfTheSquare;
  }
}
