var arr1 = [10, 20, 30, 40, 50];
console.log(arr1.length);
var no = arr1.length;
var iCnt = 0;
for (iCnt = 0; iCnt < no; iCnt++) {
    console.log(arr1[iCnt]);
}
var i = 1;
while (i <= no) {
    console.log("_______________________________________");
    console.log(arr1[i]);
    i++;
}
do {
    console.log("_______________________________________");
    console.log(arr1[i]);
    i++;
} while (i < no);
//function Display(arr1:number)
//{
//   var iCnt : number = 0;
//   for(iCnt = 0; iCnt<arr1.length;iCnt++)
//      console.log(arr1[iCnt]);
//}
//}
//Display(arr1[]);
