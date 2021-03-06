// Implement int sqrt(int x).
// Compute and return the square root of x, where x is guaranteed to be a non-negative integer.
// Since the return type is an integer, the decimal digits are truncated and only the integer 
// part of the result is returned.
class Solution {
public:
    int mySqrt(int x) {
    	return (floor(pow(10, (log10(x)) / 2 ))); 
    }
};