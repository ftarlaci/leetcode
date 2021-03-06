/*
Reverse bits of a given 32 bits unsigned integer.

Example:

Input: 43261596
Output: 964176192
Explanation: 43261596 represented in binary as 00000010100101000001111010011100, 
             return 964176192 represented in binary as 00111001011110000010100101000000.
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> in(n);
        
        string s = in.to_string();
        
        reverse(s.begin(), s.end());
        
        return bitset<32>(s).to_ulong();
    }
};