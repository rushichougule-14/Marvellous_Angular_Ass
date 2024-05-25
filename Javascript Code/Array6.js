function Display(Arr) {
    var sum = 0;
    var i = 0;
    for (i = 0; i < Arr.length; i++) {
        sum = sum + Arr[i];
    }
    return sum;
}
var Marks = [67, 89, 77, 90, 88];
var ans = Display(Marks);
console.log(ans);
