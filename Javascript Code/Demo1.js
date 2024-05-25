function ChkVowels(str) {
    var iCnt = 0;
    for (var _i = 0, str_1 = str; _i < str_1.length; _i++) {
        var sWord = str_1[_i];
        if (((sWord == "a") || (sWord == "i") || (sWord == "e") || (sWord == "o") || (sWord == "u")))
            iCnt++;
    }
    return iCnt;
}
var str = "Rushikesh";
var iCnt = 0;
iCnt = ChkVowels(str);
console.log(iCnt);
