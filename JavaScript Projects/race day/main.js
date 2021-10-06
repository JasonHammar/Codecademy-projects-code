let raceNumber = Math.floor(Math.random() * 1000);
let regEarly = false;
let age = 45;

if(regEarly && age > 18){// If the runner is an adult and registered early, their race number increases by 1000.
  raceNumber += 1000;
}

if(regEarly && age > 18){// If they registered early and are an adult, they will run at 9:30AM
  console.log('Early Runner ' + raceNumber + ' will run at 9:30AM');
}else if(!regEarly && age >= 18){// If an adult registers late, they will run at 11:00AM
  console.log('Late Runner ' + raceNumber + ' will run at 11:00AM');
}else if(age < 18){// If they are youth, they will run at 12:30PM
  console.log('Youth Runner ' + raceNumber + ' will run at 12:30PM');
}else{// Otherwise, they will be directed to see the Resgistration Desk.
  console.log('See Registration Desk.');
}
