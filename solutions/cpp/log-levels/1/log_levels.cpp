#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int idx {};
        std::string output {};
        idx = line.find(": ") + 2;
        output = line.substr(idx);
        return output;
    }
    
    std::string log_level(std::string line) {
        // return the log level
        int start_idx {};
        int end_idx {};
        std::string output {};
        
        start_idx = line.find("[") + 1;
        end_idx = line.find("]");
        output = line.substr(start_idx,end_idx-start_idx);
        return output;
    }
    
    std::string reformat(std::string line) {
        return message(line) + " (" + log_level(line) + ")";
    }
}  // namespace log_line
