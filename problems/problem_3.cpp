#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
if(S = 'M'){
        if (height < 1.70){
            "Short";
        }else if (height >= 1.70 and height <1.85){
            "Normal";
        }else if (height >= 1.85){
            "Tall";
        }

    }else if (S = 'F'){
        if (height < 1.60){
            "Short";
        }else if (height >= 1.60 and height < 1.75){
            "Normal";
        }else if (height >= 1.75){
            "Tall";
        }
    }

    // use return to return your result
    // make use of control flow statements
return 0;
}
