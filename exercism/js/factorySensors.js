
export class ArgumentError extends Error {}

export class OverheatingError extends Error {
  constructor(temperature) {
    super(`The temperature is ${temperature} ! Overheating !`);
    this.temperature = temperature;
  }
}

/**
 * Check if the humidity level is not too high.
 *
 * @param {number} humidityPercentage
 * @throws {Error}
 */
export function checkHumidityLevel(humidityPercentage) {
  if(humidityPercentage >= 70){
    throw new Error('This is too much');
  }
}

/**
 * Check if the temperature is not too high.
 *
 * @param {number|null} temperature
 * @throws {ArgumentError|OverheatingError}
 */
export function reportOverheating(temperature) {
  if(temperature === null){
    throw new ArgumentError('This is an argument error');
  }

  if(temperature > 500){
    const overHeatingErr = new OverheatingError('Some error message');
    overHeatingErr.temperature = temperature ;

    throw overHeatingErr;
  }
}

/**
 *  Triggers the needed action depending on the result of the machine check.
 *
 * @param {{
 * check: function,
 * alertDeadSensor: function,
 * alertOverheating: function,
 * shutdown: function
 * }} actions
 * @throws {ArgumentError|OverheatingError|Error}
 */
export function monitorTheMachine(actions) {
  try{
    actions.check();
  }catch(error){
    //console.log(error instanceof ArgumentError);

    if(error instanceof ArgumentError){
      actions.alertDeadSensor();
    }else if(error instanceof OverheatingError){
      if(error.temperature > 600){
        actions.shutdown();
      }else{
        console.log('This has been executed');
        actions.alertOverheating();
      }
    }else{
      throw error;
    }
  }
}
