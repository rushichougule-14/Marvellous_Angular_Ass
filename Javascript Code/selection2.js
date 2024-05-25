function DisplayExam(div) {
    if (div == "A") {
        console.log("Exam is at 7 Am");
    }
    else if (div == "B") {
        console.log("Exam is at 8 Am");
    }
    else if (div == "C") {
        console.log("Exam is at 9 Am");
    }
    else if (div == "D") {
        console.log("Exam is at 10 Am");
    }
    else {
        console.log("Wrong input.");
    }
}
var iValue = "A";
DisplayExam(iValue);
