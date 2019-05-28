# Inspired by a leet code question, I wanted to see if I code find two elements in an 'n' size array that would add up to 
# a specific user defined number. I was reading about list comprehensions and wanted to complete this problem with no
# for loops. In is from the command line and the my_func is a helper/convenience function purely for parsing CLI input.
# The real juice is in the twoSum function.

import sys
from itertools import combinations

class Solution( object ):

    def twoSum( self, array, target ):
        answer = []
        results = [ self.find_target( item, target ) for item in  combinations( array, 2 ) ] 
        [ answer.append(x) if x != 0 else 0 for x in results ]
        print( answer )
        
    def find_target( self, combi, target ):
        return (lambda: 0, lambda: combi ) [ target == ( int( combi[1] ) + int( combi[0] ) ) ] ()

    def my_func( self, args ):
        array = args[1].split(',')
        self.twoSum( array, int( array[-1] ) )

mySol = Solution()
mySol.my_func( sys.argv )
