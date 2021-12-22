const getSleepHours = day => {// Hours the user sleeped in each day of the week.
  if(day === 'monday'){
    return 8;
  }else if(day === 'tuesday'){
    return 7;
  }else if(day === 'wednesday'){
    return 8;
  }else if(day === 'thursday'){
    return 6;
  }else if(day === 'friday'){
    return 7;
  }else if(day === 'saturday'){
    return 9;
  }else if(day === 'sunday'){
    return 8;
  }
};

const getActualSleepHours= () =>{// Returns the actual number of hours the user slept that week.
  let result = 0;
  result += getSleepHours('monday');
  result += getSleepHours('tuesday');
  result += getSleepHours('wednesday');
  result += getSleepHours('thursday');
  result += getSleepHours('friday');
  result += getSleepHours('saturday');
  result += getSleepHours('sunday');

  return result;
};

const getIdealSleepHours = () =>{// Returns the ideal number of hours the user sleeps per week.
  const idealHours = 8;
  return idealHours * 7;
};

const calculateSleepDebt = () =>{// calculates whether or not the user got enough sleep, more sleep than they needed, or less than they needed.
  const actualSleepHours = getActualSleepHours();
  const idealSleepHours = getIdealSleepHours();
  if(actualSleepHours === idealSleepHours){
    console.log('You got the perfect amount of sleep!');
    
  }else if(actualSleepHours > idealSleepHours){
    console.log('You got more sleep than needed!');
    
  }else if(actualSleepHours < idealSleepHours){
    console.log('You need to get more sleep!');
  }
};

calculateSleepDebt();
