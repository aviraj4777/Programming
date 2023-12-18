let a = 'aviraj';
let b = "aviraj";
let c = `aviraj`;
console.log(a + b + c);

//template literals
let sentence = `a is a friend of b`;
let sentence1 = `${a} is a friend of ${b}`;
console.log(sentence);
console.log(sentence1);

//escape sequence characters
let fruit = 'Bana\'na';
console.log(fruit);

//methods for strings
console.log(a.toUpperCase());
console.log(a.toLowerCase());
console.log(b.slice(2,4));
console.log(b.slice(2));
console.log(c.replace("avi", "Ravi"));
let friend = 'pankaj';
console.log(friend.concat(" is a friend of ", a, " bye"));
let friend2 = "        Riya        ";
//friend1[2] = "r"; 
/* This is not possible as the string is immutable we can't modify it insted
we can store in a separate string after modifying it */
console.log(friend2.trim());

//parse int
let number = "1234";
console.log(typeof(number));
number = Number.parseInt(number);
console.log(typeof(number));