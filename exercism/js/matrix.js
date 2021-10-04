class Matrix {
  constructor(stringMatrix) {
    const arrStringMatrix = stringMatrix.split('\n');
     const stringNumsToArrOfNums = (numString) => {
      const arrString = numString.split(' ');
      const numArr = arrString.map(stringNum => Number(stringNum));
      return  numArr;
    } 
    const arrNumMatrix = arrStringMatrix.map(stringNumsToArrOfNums);

    this.numMatrix = arrNumMatrix;
  }

  get rows() {
    return this.numMatrix;
  }

  get columns() {
    let columns = [];
    const lengthOfColumn = this.numMatrix[0].length;

    for(let i = 0; i < lengthOfColumn; i++){
      let oneColumn = this.numMatrix.map(row => row[i]);
      //console.log('One column', oneColumn);
      columns.push(oneColumn); 
    }

    return columns;
  }

}
