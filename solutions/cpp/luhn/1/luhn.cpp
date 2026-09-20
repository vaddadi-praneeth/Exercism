#include "luhn.h"

namespace luhn {

// TODO: add your solution here
    bool valid(std::string luhn_number){
        luhn_number.erase(
            std::remove(luhn_number.begin(), luhn_number.end(), ' '), 
            luhn_number.end()
        );
        int len = luhn_number.length();
        for(char c:luhn_number){
            if(c - '0' > 9){
                return false;
            }
        }
        
        if(len <= 1){
            return false;
        }
        int result {};
        for(int ii{}; ii < len; ii++){
            int number = luhn_number[len - 1 - ii] - '0';

            if(ii % 2 != 0){
                number = 2*number > 9 ? 2*number - 9 : 2*number;
            }

            result += number;
            
        }
        if(result%10 == 0){
            return true;
        }
        return false;
    }

    
}  // namespace luhn
