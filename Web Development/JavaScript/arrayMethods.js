let nums = [1, 2, 3, 4, 5];
let a = nums.toString();
console.log(a);
console.log(nums);
nums.push(6);
console.log(nums);

let c = nums.join(" * ");
console.log(c);

//sort mrthod

let num = [551, 22, 3, 14, 5, 6, 7, 8, 229];
num.sort();
console.log(num); 
let compare = (a, b)=>{
    return a-b;
}
num.sort(compare);
console.log(num);

//splice
let deletedValues = num.splice(2, 3, 182, 199, 198, 197);
console.log(num);
console.log(deletedValues);


//slice
let newNum = num.slice(3);
console.log(newNum);

var values = ["one", "two", "three"];
var ans = values.shift();
console.log(values)

let arr1 = [10, 20, 30];
let arr2 = arr1.slice();
arr1.splice(0, arr1.length)
console.log(arr2); 
