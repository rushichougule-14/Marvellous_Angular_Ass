function Addition(No1, No2) {
    var Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
function Subtraction(No1, No2) {
    var Ans = 0;
    Ans = No1 - No2;
    return Ans;
}
var ino = 11;
var ino2 = 10;
var Result = 0;
Result = Addition(ino, ino2);
console.log("Addition is :" + Result);
Result = Subtraction(ino, ino2);
console.log("Subtraction is :" + Result);
