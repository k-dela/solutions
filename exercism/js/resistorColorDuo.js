const colorValues = {
  'black': '0',
  'brown': '1',
  'red': '2',
  'orange': '3',
  'yellow': '4',
  'green': '5',
  'blue': '6',
  'violet': '7',
  'grey': '8',
  'white': '9'
}

export const decodedValue = (colors) => {
  const [firstColor, secondColor] = colors;
  const strValue = colorValues[firstColor] + colorValues[secondColor];

  const result = Number(strValue);
  
  return result;
};
