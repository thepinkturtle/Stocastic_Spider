#include <iostream>
#include <deque>

class Solution{
    public:
        bool isValid( std::string s ){

            if( s.size() == 0 )
            {   
                return true;
            }
            
            if( s.size() % 2 ){
                return false;
            }
            
            std::deque< char > deque{};

            for( const auto& symbol : s ){
                deque.push_front( symbol ); 
                
                if( symbol == ')' ){
                    deque.pop_front(); 
                    if( deque.front() == '(' ){
                        deque.pop_front();
                    }
                    else {
                        return false;
                    } 
                } 

                if( symbol == ']' ){
                    deque.pop_front();
                    if( deque.front() == '[' ){
                        deque.pop_front();
                    }
                    else {
                        return false;
                   } 
                }

                if( symbol == '}' ){
                    deque.pop_front();
                    if( deque.front() == '{' ){
                        deque.pop_front();
                        }
                    else {
                        return false;
                    } 
                }
            }
            
            return deque.size() == 0 ? true : false; 
        }
};
 

int main(){
    Solution mysolution{};
    mysolution.isValid( "()" );
    return 0;
}
