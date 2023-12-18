let a = 67;
var b = 55;
console.log(a);
console.log(b);
{
    console.log("Inside a block")
    let a = "aviraj";
    console.log(a);
    var b = 99;
    console.log(b);
}
console.log("Outside Block");
console.log(a);
console.log(b);

//always try to use let instead of var.
//var can be redeclared but let can not be redeclared instead we can change the value of let.


const m = "aviraj";
//we can not change the value of const during the whole program
//const variables must be initialise otherwise will give error.