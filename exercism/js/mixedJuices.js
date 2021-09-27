// @ts-check
/**
 * Determines how long it takes to prepare a certain juice.
 *
 * @param {string} name
 * @returns {number} time in minutes
 */
export function timeToMixJuice(name) {
  switch (name){
    case 'Pure Strawberry Joy':
      return 0.5
      break;
    case 'Energizer':
    case 'Green Garden':
      return 1.5
      break;
    case 'Tropical Island':
      return 3;
      break;
    case 'All or Nothing':
      return 5;
      break;
    default:
      return 2.5;
      break;
  }
}
/**
 * Calculates the number of limes that need to be cut
 * to reach a certain supply.
 *
 * @param {number} wedgesNeeded
 * @param {string[]} limes
 * @returns {number} number of limes cut
 */
export function limesToCut(wedgesNeeded, limes) {
  if(wedgesNeeded === 0){
    return 0;
  }
  const wedgesPerLime = {
    'small': 6,
    'medium': 8,
    'large': 10
  }
  let wedgeCounter = 0;
  let limesCounted = 0;
  for(const lime of limes){
    wedgeCounter += wedgesPerLime[lime];
    limesCounted += 1;
    if(wedgeCounter >= wedgesNeeded){
      break;
    }
  }
  return limesCounted;
}
/**
 * Determines which juices still need to be prepared after the end of the shift.
 *
 * @param {number} timeLeft
 * @param {string[]} orders
 * @returns {string[]} remaining orders after the time is up
 */
export function remainingOrders(timeLeft, orders) {
  let timeToPrepare;
  while(timeLeft > 0){
    timeToPrepare = timeToMixJuice(orders[0]);
    timeLeft -= timeToPrepare;
    orders.shift();
  }
  return orders;
}
