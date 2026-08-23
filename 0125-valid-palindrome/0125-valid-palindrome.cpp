class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char& c : s) {
            if (isalnum(c)) {
                c = tolower(c);
                str += c;
            }
        }
        string rev = str;
        int left = 0, right = rev.length() - 1;
        while (left <= right) {
            swap(rev[left], rev[right]);
            left++;
            right--;
        }
        return rev == str;
    }
};