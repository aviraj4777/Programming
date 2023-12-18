let marks = {
    aviraj: 90,
    abhinav: 80,
    ajay: 56,
    pankaj: 44
}

for (let i = 0; i < Object.keys(marks).length;i++) {
    console.log("The marks of " + Object.keys(marks)[i] + " are " + marks[Object.keys(marks)[i]]);
}

//for in loop
for (let key in marks) {
    console.log("The marks of " + key + " are " + marks[key]);
}

const mean = (a, b, c, d) => {
    return (a+b+c+d) / 4;
}

console.log(mean(4, 4, 4, 4));