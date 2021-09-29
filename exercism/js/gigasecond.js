
export const gigasecond = (moment) => {
  const seconds = Math.floor(moment / 1000);
  const milisecondsPlusGiga = (seconds + 1000000000) * 1000;
  const dateAfterGiga = new Date(milisecondsPlusGiga);
  return dateAfterGiga;
};
