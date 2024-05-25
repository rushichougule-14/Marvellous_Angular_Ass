var Arithmetic = /** @class */ (function () {
    function Arithmetic(ino1, ino2) {
        this.no1 = ino1;
        this.no2 = ino2;
    }
    Arithmetic.prototype.Addition = function () {
        var Ans;
        Ans = this.no1 + this.no2;
        return Ans;
    };
    Arithmetic.prototype.Subtraction = function () {
        var Ans;
        Ans = this.no1 - this.no2;
        return Ans;
    };
    return Arithmetic;
}());
var obj1 = new Arithmetic(11, 21);
console.log(obj1.no1);
console.log(obj1.no2);
var Result = obj1.Addition();
console.log("Addition is :" + Result);
Result = obj1.Subtraction();
console.log("Subtraction is :" + Result);
var obj2 = new Arithmetic(25, 21);
