var Demo = /** @class */ (function () {
    function Demo(ivalue1, ivalue2) {
        console.log("Inside the Paremterised constructor");
        this.No1 = ivalue1;
        this.No2 = ivalue2;
    }
    Demo.prototype.Display = function () {
        console.log("Inside Display Function Of Demo class");
    };
    return Demo;
}());
var obj2 = new Demo(11, 21);
var obj1 = new Demo(20, 11);
obj2.Display();
console.log(obj2.No1);
console.log(obj2.No2);
