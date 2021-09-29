const nucleotideComplements = {
  G: 'C',
  C: 'G',
  T: 'A',
  A: 'U'
}

export const toRna = (DNA) => {
  let RNA = '';
  for(const letter of DNA){
    RNA += nucleotideComplements[letter];
  }

  return RNA;
};
