function print(n) {
    if (n == 1) {
        console.log(n);
        return;
    }
    //console.log(n);
    print(n - 1);
    console.log(n);
}

print(6);

function factorial(n) {
    if (n == 1  || n == 0) 
        return 1;

    return n * factorial(n - 1);

}

console.log(factorial(5));