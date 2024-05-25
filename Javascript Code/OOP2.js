var Demo = /** @class */ (function () {
    function Demo() {
    }
    Demo.prototype.Display = function () {
        console.log("Inside Display Function Of Demo class");
    };
    return Demo;
}());
var obj = new Demo();
obj.Display();
