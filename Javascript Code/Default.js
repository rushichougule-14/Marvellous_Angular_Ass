function Percentage(Marks, OutOfMark) {
    if (OutOfMark === void 0) { OutOfMark = 100; }
    var Result = 0;
    Result = ((Marks / OutOfMark) * 100);
    return Result;
}
var Ans = Percentage(89);
console.log("Percentage is :", Ans);
var Ans = Percentage(89, 200);
console.log("Percentage is :", Ans);
