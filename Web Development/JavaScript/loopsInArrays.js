let num = [11, 133, 44, 534, 53, 78];

for (let i = 0; i < num.length; i++) {
    console.log(num[i]);
}

//For Each loop
num.forEach((element) => {
    console.log(element * element);
})

//Array.from
let Name = "Harendra";
let arr = Array.from(Name);
console.log(arr);

//it will give value
for (let i of num) {
    console.log(i);
}

//it will give index 
for (let i in num) {
    console.log(i);
}

//map, filter and reduce
//map method
let a = num.map((value, index, array) => {
    //console.log(value, index, array);
    return value + 1;
})
console.log(a);

//filter method
let b = num.filter((a) => {
    return a < 100;
})

console.log(b);

//reduce method

const c = num.reduce(function(acc, curr) {
    acc = acc + curr;
    return acc;
}, 0);

console.log(c);