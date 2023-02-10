class Solution {
public:
    bool isPalindrome(int x) {
        string word = to_string(x);
        int len = word.length();
        for(int i = 0; i < len/2; ++i)
        {
            if(word[i] != word[len-i-1])
            {
                return false;
            }
        }
        return true;
    }
};