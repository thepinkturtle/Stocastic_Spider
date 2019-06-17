"""Given a 32-bit signed integer, reverse digits of an integer. Taken straight from leetcode.com. I prefer this solution because
I can read it and understand it later, and it uses raw python no fancy imports :)"""

class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        result = 0;
        negative = False;
        if( x < 0 ):
            negative = True;
            x = x * -1;

        while( x > 0 ):
            digit = x % 10;
            result = result * 10 + digit;
            x = x // 10;

        if( negative ):
            result = result * -1;
            negative = False;

        if( result < ( ( 2**31 ) -1 ) and result > ( ( 2**31 ) * -1 ) ):
            return result;
        
        return 0;
