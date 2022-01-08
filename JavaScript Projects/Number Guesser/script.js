let humanScore = 0;
let computerScore = 0;
let currentRoundNumber = 1;


const generateTarget = () =>{// Generates target for guessing.
  return Math.floor(Math.random() * 10);
};

const compareGuesses = (userGuess, computerGuess, secretTarget) =>{
  // Compares the guesses between the user and computer
  const userScore = Math.abs(secretTarget - userGuess);
  const computerScore = Math.abs(secretTarget - computerGuess);
  if(userScore <= computerScore){
    return true;
  }
  return false;
};

const updateScore = winner =>{// Updates the score of the computer or the human user, depending on who wins
  if(winner === 'human'){
    humanScore++;
  }else{
    computerScore++;
  }
};

const advanceRound = () =>{
  // Updates the number of rounds
  currentRoundNumber++;
};
