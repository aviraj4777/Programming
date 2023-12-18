let courses = [
    {no:1, naam : 'Aviraj'},
    {no:2, naam : 'Kumar'},
    {no:3, naam : 'Aditya'}
];

let course = courses.find(function(entity) {
    return entity.naam === 'Aviraj';
})
console.log(course);

let course2 = courses.find(entity => entity.no === 3);
console.log(course2)