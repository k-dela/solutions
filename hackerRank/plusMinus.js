'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

function plusMinus(arr) {
    let len = arr.length;
    let numOfPositive = 0;
    let numOfNegative = 0;
    let numOfZero = 0;
    
    for(let num of arr){
        if(num === 0){
            numOfZero += 1;
        }else if (num < 0){
            numOfNegative += 1;
        }else{
            numOfPositive += 1;
        }
    }
    
    console.log((numOfPositive/len).toFixed(6));
    console.log((numOfNegative/len).toFixed(6));
    console.log((numOfZero/len).toFixed(6));
}

function main() {
    const n = parseInt(readLine().trim(), 10);

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

    plusMinus(arr);
}
