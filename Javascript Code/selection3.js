function DisplayExamTime(iValue) {
    switch (iValue) {
        case "A":
            {
                console.log("Your exam at 7 AM");
                break;
            }
        case "B":
            {
                console.log("Your exam at 8 AM");
                break;
            }
        case "C":
            {
                console.log("Your exam at 9 AM");
                break;
            }
        case "D":
            {
                console.log("Your exam at 10 AM");
                break;
            }
        default:
            {
                console.log("Wrong Input");
            }
    }
}
var div = "C";
DisplayExamTime(div);
