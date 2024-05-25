//var Arr : number [] = [11,21,51,101,111];
function Display() {
    var language = ["C", "Java", "Python", "Typescript"];
    return language;
}
var arr2;
arr2 = Display();
console.log("Elements are :");
var i = 0;
for (i = 0; i < arr2.length; i++) {
    console.log(arr2[i]);
}
