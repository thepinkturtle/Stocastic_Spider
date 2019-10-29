class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::string myString{};
        int result{0};
        int reset{0};
        
        for( int i = 0; i < s.size(); ++i){
                
            auto notFound=myString.find(s[i]);

            if( notFound == std::string::npos ){
                myString.append(std::string(1,s[i]));
            } else {
                ++reset;
                i = reset;
                myString = "";
                myString.append(std::string(1,s[i]));
            }
            
                result = result < myString.size() ? myString.size() : result;
        }
        
        std::cout<< "The end result: " << myString << std::endl;
        return result;
        
    }
        // find the element in the map thats the longest and return it.
};
