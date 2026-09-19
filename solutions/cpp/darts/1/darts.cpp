#include "darts.h"

namespace darts {

// TODO: add your solution here
    int score(float x, float y){
        float distance = std::pow(std::pow(x,2) + std::pow(y,2),0.5);

        if(distance <= 1){
            return 10;
        }else if(distance <= 5){
            return 5;
        }else if(distance <= 10){
            return 1;
        }
        
        return 0;
    
    }
    
}  // namespace darts
