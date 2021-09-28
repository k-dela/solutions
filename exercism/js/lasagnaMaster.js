/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */
export function cookingStatus(remainingTime){
  let statusMessage = 'Not done, please wait.';
  if(remainingTime === 0){
    statusMessage = 'Lasagna is done.';
  }else if (!remainingTime){
    statusMessage = 'You forgot to set the timer.';
  }
  return statusMessage;
}
export function preparationTime(layers, avgPreparationTime = 2) {
  return layers.length * avgPreparationTime;
}
export function quantities(layers) {
  const quantities = {
    'noodles': 0,
    'sauce': 0
  }
  for(const ingredient of layers){
    if(ingredient === 'noodles'){
      quantities[ingredient] += 50;
    }else if (ingredient === 'sauce'){
      quantities[ingredient] += 0.2;
    }
  }
  return quantities;
}
export function addSecretIngredient(friendList, myList){
  const lastIndex = friendList.length - 1;
  myList.push(friendList[lastIndex]);
}
export function scaleRecipe(recipe, numOfPortions){
  const scaledRecipe = {};
  for(const ingredient in recipe){
    scaledRecipe[ingredient] = (recipe[ingredient] / 2) * numOfPortions;
  }
  return scaledRecipe;
}
