function CkEven(no1) {
    if (no1 % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
var value = 11;
var Result;
Result = CkEven(value);
if (Result == true) {
    console.log("It is even");
}
else {
    console.log("It is odd");
}
