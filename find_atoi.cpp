class Solution {
public:
    std::unordered_map<char, int> numbers = {{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}};
    
    int myAtoi(string str) {
        int result{0};
        int multiplier{0};
        bool negative{false};
        
        if(str.size() > 1){

            const auto sign_pos{str.find_last_of('-')};
            
            if(sign_pos != std::string::npos){
                auto substring{str.substr(sign_pos + 1, sign_pos)};
                std::cout<< "substring is: " << substring << std::endl;
                if( numbers.find(*substring.c_str()) != numbers.end()){
                    negative = true;
                }
            }
        }
        
        for(char c : str){
            if(numbers.find(c) != numbers.end()){
                
                if(multiplier){
                    multiplier *= 10;
                } else {
                    multiplier += 10;
                }
                if(result){
                    result *= 10;
                }
                result += numbers.at(c);    
            }
        }
        return negative == true ? result *= -1 : result;
    }
};
