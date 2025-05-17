#include <string>
#include <cctype> // Include for std::isalnum

class Solution {
public:
    bool isPalindrome(string str) {
        int s = 0;
        int e = str.length() - 1;
        while (s <= e) {
            if (!isalnum(str[s])) { // Skip non-alphanumeric characters
                s++;
                continue;
            }
            if (!isalnum(str[e])) { // Skip non-alphanumeric characters
                e--;
                continue;
            }
            if (tolower(str[s]) != tolower(str[e])) { // Convert to lowercase for comparison
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};
