#include "raindrops.h"


namespace raindrops {

// TODO: add your solution here
    std::string convert(int number){
        std::string message {};

        if(number%3 == 0){
            message += "Pling";
        }
        if(number%5 == 0){
            message += "Plang";
        }
        if(number%7 == 0){
            message += "Plong";
        }
        if(message.empty()){
            message = std::to_string(number);
        }

        return message;
    }

}  // namespace raindrops
