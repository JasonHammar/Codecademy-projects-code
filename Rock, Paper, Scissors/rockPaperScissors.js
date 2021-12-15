const getUserChoice = (userInput) =>{// Gets the user choice for rock, paper, or scissors
  userInput = userInput.toLowerCase();
  if(userInput === 'rock' || userInput === 'paper' || userInput === 'scissors'){
    return userInput;
  }else{
    console.log('Error, invalid input!');
  }
};

const getComputerChoice = () =>{// Generates random choice for computer.
  const choice = Math.floor(Math.random() * 3);
  if(choice === 1){
    return 'rock';
  }else if(choice === 2){
    return 'paper';
  }else{
    return 'scissors';
  }
};

const determineWinner = (userChoice, computerChoice) =>{// Determines winner between user and computer by comparing the two answers. If there is a tie, no one wins.
  if(userChoice === computerChoice){
    return 'Its a Tie!';
  }
  if(userChoice === 'rock'){
    if(computerChoice === 'scissors'){
      return 'User Won';
    }else{
      return 'computer won';
    }
  }else if(userChoice === 'paper'){
    if(computerChoice === 'rock'){
      return 'User Won';
    }else{
      return 'computer won';
    }
  } else if(userChoice === 'scissors'){
    if(computerChoice === 'paper'){
      return 'User Won';
    }else{
      return 'computer won';
    }
  }
  
};

const playGame = () =>{// Starts a new game of rock paper scissors.
  
  const userChoice = getUserChoice('rock');// can switch to paper or scissors as well.
  const computerChoice = getComputerChoice();
  console.log(determineWinner(userChoice, computerChoice));
};

playGame();
