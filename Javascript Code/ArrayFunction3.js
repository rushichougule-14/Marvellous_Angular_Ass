//var Arr : number [] = [11,21,51,101,111];
function Display() {
    return new Array(10, 20, 30, 40);
}
var Arr = Display();
console.log("Elements are :");
var i = 0;
for (i = 0; i < Arr.length; i++) {
    console.log(Arr[i]);
}
