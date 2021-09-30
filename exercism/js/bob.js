export const hey = (message) => {
  const messageFilter = message.trim();
  if(!messageFilter){
    return  'Fine. Be that way!';
  }
  
  const isQuestion = messageFilter.endsWith('?');

  const isAllCapitals = message.toUpperCase() === message && message !== message.toLowerCase();

  if(isQuestion && isAllCapitals){
    return "Calm down, I know what I'm doing!";
  }else if(isQuestion){
    return 'Sure.';
  }else if(isAllCapitals){
    return  'Whoa, chill out!' ;
  }

  return 'Whatever.';
};
