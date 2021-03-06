 * Create a function which returns a function making use of a closure to
 * perform a repeatable 2d translation of a coordinate pair.
 *
 * @param {number} dx the translate x component
 * @param {number} dy the translate y component
 *
 * @returns {function} a function which takes an x, y parameter, returns the
 *  translated coordinate pair in the form [x, y]
 */
export function translate2d(dx, dy) {
  return function (num1, num2) {
    return [dx + num1, dy + num2];
  }
}
/**
 * Create a function which returns a function making use of a closure to
 * perform a repeatable 2d scale of a coordinate pair.
 *
 * @param {number} sx the amount to scale the x component
 * @param {number} sy the amount to scale the y component
 *
 * @returns {function} a function which takes an x, y parameter, returns the
 *  scaled coordinate pair in the form [x, y]
 */
export function scale2d(sx, sy) {
  return function (num1, num2) {
    return [sx * num1, sy * num2];
  }
}
/**
 * Create a composition function which returns a function that combines two
 * functions to perform a repeatable transformation
 *
 * @param {function} f the first function to apply
 * @param {function} g the second function to apply
 *
 * @returns {function} a function which takes an x, y parameter, returns the
 *  transformed coordinate pair in the form [x, y]
 */
export function composeTransform(f, g) {
  return function (num1, num2) {
    const resultF = f(num1, num2);
    
    const resultG = g(...resultF);
    return resultG;
  }
}
/**
 * Return a function which memoizes the last result.  If the arguments are the same as the last call,
 * then memoized result returned.
 *
 * @param {function} f the transformation function to memoize, assumes takes two arguments 'x' and 'y'
 *
 * @returns {function} a function which takes and x, y argument, and will either return the saved result
 *  if the arguments are the same on subsequent calls, or compute a new result if they are different.
 */
export function memoizeTransform(f) {
  let firstArgument, secondArgument, lastResult;
  return function(num1,num2){
    if(num1 === firstArgument && num2 === secondArgument){
      //console.log(`${lastResult} this is the last result`);
      return lastResult;
    }
    firstArgument = num1;
    secondArgument = num2;
    const result = f(num1,num2);
    lastResult = result;
    //console.log(`${lastResult} this is a brand new result`);
    return result;
  }
}
