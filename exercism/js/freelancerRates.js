// @ts-check
// Get those rates calculated!

/**
 * The day rate, given a rate per hour
 *
 * @param {number} ratePerHour
 * @returns {number} the rate per day
 */
export function dayRate(ratePerHour) {
  return 8 * ratePerHour;
}

/**
 * Calculates the rate per month
 *
 * @param {number} ratePerHour
 * @param {number} discount for example 20% written as 0.2
 * @returns {number} the rounded up monthly rate
 */
export function monthRate(ratePerHour, discount) {
  let totalMonthRate = dayRate(ratePerHour) * 22;
  console.log(totalMonthRate);
  let totalDiscount = totalMonthRate * discount;
  console.log(totalDiscount);
  totalMonthRate -= totalDiscount;
  console.log(totalMonthRate);

  return Math.ceil(totalMonthRate);
}

/**
 * Calculates the number of days in a budget, rounded down
 *
 * @param {number} budget the total budget
 * @param {number} ratePerHour the rate per hour
 * @param {number} discount to apply, example 20% written as 0.2
 * @returns {number} the number of days
 */
export function daysInBudget(budget, ratePerHour, discount) {
  let priceOfOneDay = dayRate(ratePerHour);
  let totalDiscount = priceOfOneDay * discount;

  priceOfOneDay -= totalDiscount;
  

  return Math.floor(budget / priceOfOneDay);
}
