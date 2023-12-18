let randomNumber = Math.floor(Math.random() * 100 + 1);
let chances = 0;
let userInput = prompt("Guess the number ");
while (randomNumber != userInput) {

    if (userInput > randomNumber) {
        alert("Your number is greater than the actual number.");
    }

    else
        alert("Your number is lesser than the actual number.");

    chances++;
    
    userInput = prompt("Guess Again");
}

alert("Congrats, You got the actual number in " + chances + " chances");

