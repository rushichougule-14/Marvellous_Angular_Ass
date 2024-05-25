function Percentage(Marks, OutOfMark) {
    var Result = 0;
    Result = ((Marks / OutOfMark) * 100);
    return Result;
}
var Ans = Percentage(89, 200);
console.log("Percentage is :", Ans);
