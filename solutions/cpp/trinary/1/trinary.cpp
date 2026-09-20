#include "trinary.h"

namespace trinary {

// TODO: add your solution here
    int to_decimal(std::string trisym){
        int number{};
        int idx{};
        int len = trisym.length();

        for (char c : trisym){
            if(c - '0' > 2){
                return 0;
            }
            number += (c - '0') * std::pow(3,len-1-idx);
            idx++;
        }

        return number;
    }
    
    
}  // namespace trinary
