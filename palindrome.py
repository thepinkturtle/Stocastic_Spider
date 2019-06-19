""" Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward. """

class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if( x < 0 ):
            return False;
        
        if( x < 10 ):
            return True;
        
        digit = 0;
        result = 0;
        temp_x = x;
        
        while( temp_x > 0 ):
            digit = temp_x % 10;
            result = ( result * 10 ) + digit;
            temp_x = temp_x // 10; 
            
        
        if( result == x ):
            return True;

        return False;
