// @ts-check
/**
 * Calculates the total bird count.
 *
 * @param {number[]} birdsPerDay
 * @returns {number} total bird count
 */
export function totalBirdCount(birdsPerDay) {
  let total = 0;
  for (let index = 0; index < birdsPerDay.length; index++) {
    total += birdsPerDay[index];
  }
  return total;
}
/**
 * Calculates the total number of birds seen in a specific week.
 *
 * @param {number[]} birdsPerDay
 * @param {number} week
 * @returns {number} birds counted in the given week
 */
export function birdsInWeek(birdsPerDay, week) {
  let startingIndex = 0;
  for(let i = 1; i < week; i++){
    startingIndex += 7;
  }
  console.log(startingIndex);
  let birdsOnThatWeek = 0;
  for(let i = startingIndex; i <= startingIndex + 6; i++){
    birdsOnThatWeek += birdsPerDay[i];
  }
  return birdsOnThatWeek;
}
/**
 * Fixes the counting mistake by increasing the bird count
 * by one for every second day.
 *
 * @param {number[]} birdsPerDay
 * @returns {number[]} corrected bird count data
 */
export function fixBirdCountLog(birdsPerDay) {
  for(let i = 0; i < birdsPerDay.length; i += 2){
    birdsPerDay[i] = birdsPerDay[i] + 1;
  }
  return birdsPerDay;
}
