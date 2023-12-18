let person = {
    fName: 'Aviraj', 
    lName: 'Kumar',
    get fullName() {
        return `${person.fName} ${person.lName}`;
    },
    set fullName(value) {
        let parts = value.split(' ');
        this.fName = parts[0];
        this.lName = parts[1];
    }
};

function display() {
    return `${person.fName} ${person.lName}`;
}

//console.log(display());
console.log(person.fullName);
person.fullName = "Abhishek Kumar";
console.log(person.fullName); 

