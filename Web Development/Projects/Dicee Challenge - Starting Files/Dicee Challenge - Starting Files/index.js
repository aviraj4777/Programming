let randomNumber1 = Math.random();
randomNumber1 = 1 + Math.floor(randomNumber1 * 6);
let randomNumber2 = Math.floor(Math.random() * 6 + 1);

let randomDiceImage1 = "images/dice" + randomNumber1 + ".png";
let randomDiceImage2 = "images/dice" + randomNumber2 + ".png";

let image = document.querySelectorAll("img");
image[0].setAttribute("src", randomDiceImage1);
image[1].setAttribute("src", randomDiceImage2);

if (randomNumber1 > randomNumber2)
    document.querySelector("h1").innerHTML = "🎖️Player 1 wins";
else if (randomNumber1 < randomNumber2)
    document.querySelector("h1").innerHTML = "🎖️Player 2 wins";
else
document.querySelector("h1").innerHTML = "🎖️It's a draw";