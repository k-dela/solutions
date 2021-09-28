import { checkStatus, checkInventory } from './grocer';

/**
 * Returns the service status as a boolean value
 * @return {boolean}
 */
export function isServiceOnline() {
  const status = checkStatus(function (currentStatus) {
    if(currentStatus === 'ONLINE'){
      return true
    }else{
      return false;
    }
  });

  return status;
}

/**
 * Pick a fruit using the checkInventory API
 *
 * @param {string} variety
 * @param {number} quantity
 * @param {InventoryCallback} callback
 * @return {AvailabilityAction} the result from checkInventory
 */
export function pickFruit(variety, quantity, callback) {
  const query = {variety, quantity};
  const result = checkInventory(query, callback);
  
  return result;
}

/**
 * This is a callback function to be passed to the checkInventory API
 * handvarles the next step once the inventory is known
 * @param {string | null} err
 * @param {boolean} isAvailable
 * @return {AvailabilityAction} whether the fruit was purchased 'PURCHASE' or 'NOOP'
 */
export function purchaseInventoryIfAvailable(err, isAvailable) {
  if(isAvailable === undefined){
    throw new Error(err);
  }

  if(isAvailable){
    return 'PURCHASE';
  }

  return 'NOOP';
}

/**
 * Pick a fruit, and if it is available, purchase it
 *
 * @param {string} variety
 * @param {number} quantity
 * @return {AvailabilityAction} whether the fruit was purchased 'PURCHASE' or 'NOOP'
 */
export function pickAndPurchaseFruit(variety, quantity) {
  const res = pickFruit(variety, quantity,purchaseInventoryIfAvailable);

  //console.log(res);
  return res;
}
