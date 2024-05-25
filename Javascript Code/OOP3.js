var Demo = /** @class */ (function () {
    function Demo() {
        console.log("Inside the default constructor");
        this.No1 = 0;
        this.No2 = 0;
    }
    Demo.prototype.Display = function () {
        console.log("Inside Display Function Of Demo class");
    };
    return Demo;
}());
var obj = new Demo();
obj.Display();
console.log(obj.No1);
console.log(obj.No2);
